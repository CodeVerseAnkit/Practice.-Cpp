#include <iostream>
#include <vector>
using namespace std;
// pelindrome partition problem:-

// palindrome check function
bool ispelindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}
// helper (recursion function)
void getallpart(string s, vector<vector<string>> &ans, vector<string> &part)
{
    if (s.size() == 0)
    { // base case
        ans.push_back(part);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string sub = s.substr(0, i + 1);
        if (ispelindrome(sub))
        {
            // store sub
            part.push_back(sub);
            //  recursion
            getallpart(s.substr(i + 1), ans, part);
            // backtracking
            part.pop_back();
        }
    }
}

// pelindrome partition function
vector<vector<string>> pelindrome_partition(string &s)
{
    vector<vector<string>> ans;
    vector<string> part;
    getallpart(s, ans, part);
    return ans;
}

// main function
int main()
{
    string s = "aab";
    vector<vector<string>> ans = pelindrome_partition(s);
    // printing ans
    cout << " Ans: " << endl;
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}