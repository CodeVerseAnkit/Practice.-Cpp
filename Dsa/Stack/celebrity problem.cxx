#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// celebrity problem (find celebrity)
int findcelebrity(vector<vector<int>> &num)
{
    int n = num.size();
    stack<int> st;
    for (int i = 0; i < n; i++)
        st.push(i);
    while (st.size() > 1)
    {
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();
        if (num[i][j] == 0)
            st.push(i);
        else
            st.push(j);
    }
    int cele = st.top();
    for (int i = 0; i < n; i++)
    {
        if (i != cele && (num[i][cele] == 0 || num[cele][i] == 1))
            return -1;
    }
    return cele;
}
int main()
{
    vector<vector<int>> num = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    int ans = findcelebrity(num);
    cout << "Celebrity: " << ans << endl;
    return 0;
}