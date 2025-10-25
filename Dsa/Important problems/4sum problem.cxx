#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> foursum(vector<int> &nums, int t)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n;)
        {
            int k = j + 1, l = n - 1;
            while (k < l)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];
                if (sum < t)
                {
                    k++;
                }
                else if (sum > t)
                {
                    l--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
    }
    ret
    urn ans;
}
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = foursum(nums, target);
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}