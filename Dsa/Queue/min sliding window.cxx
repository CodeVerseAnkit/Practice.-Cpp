#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;
    // first window
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[dq.back()] >= nums[i])
            dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i < nums.size(); i++)
    { // store ans
        ans.push_back(nums[dq.front()]);
        // remove element that are not in window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        // remove element that are not an ans
        while (!dq.empty() && nums[dq.back()] >= nums[i])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}

int main()
{
    vector<int> nums = {1,
                        3,
                        -1,
                        -3,
                        5,
                        3,
                        6,
                        7};
    int k = 3;
    vector<int> ans = maxSlidingWindow(nums, k);
    cout << "Ans: ";
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}