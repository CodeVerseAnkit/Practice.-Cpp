#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// previous smaller elements
vector<int> nextgreater(vector<int> &num)
{
    stack<int> s;
    vector<int> ans(num.size(), 0);
    for (int i = 0; i < num.size(); i++)
    {
        while (!s.empty() && s.top() >= num[i])
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
    vector<int> num = {3, 1, 0, 8, 6};
    vector<int> ans = nextgreater(num);
    cout << "Next greater: ";
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}