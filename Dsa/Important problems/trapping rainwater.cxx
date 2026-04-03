#include <iostream>
#include <vector>
using namespace std;
// trapping rainwater problem
int trap_rainwater(vector<int> &ht)
{
    int n = ht.size();
    int ans = 0;
    int lmax = 0, rmax = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        lmax = max(lmax, ht[l]);
        rmax = max(lmax, ht[r]);
        if (lmax < rmax)
        {
            ans += lmax - ht[l];
            l++;
        }
        else
        {
            ans += rmax - ht[r];
            r--;
        }
    }
    return ans;
}
int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int ans = trap_rainwater(height);
    cout << "Total Rainwater: " << ans << endl;
    return 0;
}