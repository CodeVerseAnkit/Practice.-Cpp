#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// next greater elements 2
vector<int> next_greater(vector<int> &num)
{
    int n = num.size();
    vector<int> ans(n, -1);
    stack<int> s;
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (s.size() && num[s.top()] <= num[i % n])
            s.pop();
        ans[i % n] = s.empty() ? -1 : num[s.top()];
        s.push(i % n);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 3};
    vector<int> ans = next_greater(nums);
    cout << "Next Greater : ";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}