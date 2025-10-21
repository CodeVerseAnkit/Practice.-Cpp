#include <iostream>
#include <vector>
using namespace std;
vector<string> summaryrange(vector<int> v)
{
    int start = v[0];

    vector<string> ans;

    for (int i = 1; i <= v.size(); i++)
    {
        if (i == v.size() || v[i] != v[i - 1] + 1)
        {
            if (start == v[i - 1])
            {
                ans.push_back(to_string(start));
            }
            else
            {
                ans.push_back(to_string(start) + "->" + to_string(v[i - 1]));
            }
            if (i < v.size())
                start = v[i];
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {0, 1, 2, 4, 5, 7};
    vector<string> ans = summaryrange(vec);
    for (string i : ans)
        cout << i << " ";
    return 0;
}