#include <iostream>
#include <vector>
using namespace std;
// Emplementaion of stack using vector
class stack
{
    vector<int> s;

  public:
    // push function
    void push(int val)
    {
        s.push_back(val);
    }
    // pop function
    void pop()
    {
        s.pop_back();
    }
    // top function
    int top()
    {
        if (s.size() == 0)
        {
            cout << "Stack underflow " << endl;
            return 0;
        }
        return s[s.size() - 1];
    }
    // size function
    int size()
    {
        return s.size();
    }
    // empty function
    bool empty()
    {
        return s.empty();
    }
    // swap function
    void swap(stack &s1, stack &s2)
    {
        stack temp1, temp2;
        while (!s1.empty() || !s2.empty())
        {
            if (!s1.empty())
            {
                temp1.push(s1.top());
                s1.pop();
            }
            if (!s2.empty())
            {
                temp2.push(s2.top());
                s2.pop();
            }
        }
        while (!temp1.empty() || !temp2.empty())
        {
            if (!temp2.empty())
            {
                s1.push(temp2.top());
                temp2.pop();
            }
            if (!temp1.empty())
            {
                s2.push(temp1.top());
                temp1.pop();
            }
        }
    }
};
void print(stack s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    print(s);
    cout << "\n"
         << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    stack a, b;
    a.push(3);
    a.push(4);
    a.push(5);
    b.push(7);
    b.push(8);
    b.push(9);
    b.push(10);
    cout << "Before swap:-" << endl;
    cout << "a: ";
    print(a);
    cout << "\nb: ";
    print(b);
    cout
        << "\nAfter swap:-" << endl;
    a.swap(a, b);
    cout << "\na: ";
    print(a);
    cout << "\nb: ";
    print(b);
    return 0;
}