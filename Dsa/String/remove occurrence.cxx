#include <iostream>
#include <string>
using namespace std;
// function to remove occurrence
void removeoccurrence(string &s, string &p)
{
    while (s.length() > 0 && s.find(p) < s.length())
    {
        s.erase(s.find(p), p.length());
    }
}

int main()
{
    string str = "daabcabcb";
    string part = "abc";
    cout << "String: " << str << endl;
    removeoccurrence(str, part);
    cout << " String after deleting occurrences: " << str << endl;
    return 0;
}