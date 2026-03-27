#include <iostream>
#include <stack>
using namespace std;
// using stack from stl
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    print(s);
    cout << "\n"
         << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}