#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> intersection(vector<int> n1, vector<int> n2)
{
    vector<int> ans;
    unordered_map<int, int> freq;
    for (int i : n1)
        freq[i]++;
    for (int i : n2)
    {
        if (freq[i] > 0)
        {
            ans.push_back(i);

            freq[i]--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> ans = intersection(nums1, nums2);
    for (int i : ans)
        cout << i << " ";
    return 0;
}