#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
// find first unique element (non-reeating)
int firstUniqChar(string s)
{
    unordered_map<char, int> m;
    queue<int> q;
    for (int i = 0; i < s.size(); i++)
    {
        if (!m.count(s[i]))
            q.push(i);
        m[s[i]]++;
        while (!q.empty() && m[s[q.front()]] > 1)
            q.pop();
    }
    return q.empty() ? -1 : q.front();
}
int main()
{
    string s = "leetcodelove";
    cout << "First unique element: " << firstUniqChar(s) << endl;
    return 0;
}