#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// stock span problem
vector<int> stock_span(vector<int> &price)
{
    stack<int> s;
    vector<int> ans(price.size(), 0);
    for (int i = 0; i < price.size(); i++)
    {
        while (!s.empty() && price[s.top()] <= price[i])
        {
            s.pop();
        }
        if (s.empty())
            ans[i] = i + 1;
        else
            ans[i] = i - s.top();
        s.push(i);
    }
    return ans;
}
int main()
{
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stock_span(price);
    cout << "ans:- ";
    for (int i : ans)
        cout << i << " ";
    cout << endl;

    return 0;
}