#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> v, int t)
{
    int st = 0, end = v.size() - 1;
    int mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (v[mid] == t)
        {
            return mid;
        }
        if (t < v[mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return st;
}
int main()
{
    vector<int> vec = {2, 4, 5, 6, 7};
    int target = 0;
    cout << search(vec, target);
    return 0;
}