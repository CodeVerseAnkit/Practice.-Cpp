#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> threesum(vector<int> v, int t)
{ // 3 sum problem (optimal approach)
    int n = v.size();
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && v[i] == v[i - 1])
            continue;
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = v[i] + v[j] + v[k];
            if (sum < t)
            {
                j++;
            }
            else if (sum > t)
            {
                k--;
            }
            else
            {
                ans.push_back({v[i], v[j], v[k]});
                j++;
                k--;
                while (j < k && v[j] == v[j - 1])
                    j++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int target = 0;
    vector<vector<int>> ans = threesum(nums, target);
    cout << "Triplets: " << endl;
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}