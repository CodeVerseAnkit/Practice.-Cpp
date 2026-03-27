#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// next greater elements
vector<int> nextgreater(vector<int> &num)
{
    stack<int> s;
    vector<int> ans(num.size(), 0);
    for (int i = num.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= num[i])
            s.pop();
        if (s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();
        s.push(num[i]);
    }
    return ans;
}
int main()
{
    vector<int> num = {6, 8, 0, 1, 3};
    vector<int> ans = nextgreater(num);
    cout << "Next greater: ";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}