#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> sum2(vector<int> v, int t)
{ // 2 sum problem (optimal approach)
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        int first = v[i];
        int sec = t - first;
        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 11, 7, 15};
    int target = 9;
    vector<int> ans = sum2(nums, target);
    cout << "Ans: ";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}