#include <iostream>
#include <string>
using namespace std;
string reversestr(string s)
{
    int n = s.length();
    string ans = "";
    // reverse string
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        // find word
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        // reverse word
        reverse(word.begin(), word.end());
        // stored word in ans
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    return ans.substr(1); // because return string except 0 index
}
int main()
{
    string str = "the sky is blue";
    cout << "String: " << str << endl;
    cout << "Reversed string: " << reversestr(str) << endl;
    return 0;
}