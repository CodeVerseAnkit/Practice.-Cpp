#include <iostream>
#include <string>
using namespace std;
bool isalphanumeric(char c)
{
    if ((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool ispalindrome(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (!isalphanumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isalphanumeric(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }

        st++;
        end--;
    }
    return true;
}
int main()
{
    string str = "Ac3?e3c&a";
    if (ispalindrome(str))
    {
        cout << "This string is a palindrome " << endl;
    }
    else
    {
        cout << " This string is not a palindrome " << endl;
    }
    return 0;
}