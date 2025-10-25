#include <iostream>
#include <vector>
using namespace std;
// ispossible function check the placement of cow is possible or not
bool ispossible(vector<int> v, int n, int c, int minallowedis)
{
    int cow = 1, laststallpos = v[0];
    for (int i = 1; i < n; i++)
    {
        if ((v[i] - laststallpos) >= minallowedis)
        {
            cow++;
            laststallpos = v[i];
        }
        if (cow == minallowedis)
        {
            return true;
        }
    }
    return false;
}
int getdistance(vector<int> v, int n, int c)
{
    sort(v.begin(), v.end());
    int st = 1, end = v[n - 1] - v[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ispossible(v, n, c, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1, 2, 8, 4, 9};
    int n = 5, c = 3;
    cout << getdistance(vec, n, c) << endl;
    return 0;
}