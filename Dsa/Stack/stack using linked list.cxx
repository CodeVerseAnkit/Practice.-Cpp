#include <iostream>
#include <list>
using namespace std;
// Emplementaion of stack using linked list
class stack
{
    list<int> ll;

  public:
    // push function
    void push(int val)
    {
        ll.push_front(val);
    }
    // pop function
    void pop()
    {
        if (ll.empty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        ll.pop_front();
    }
    // top function
    int top()
    {
        if (ll.empty())
        {
            cout << "stack is empty " << endl;
            return -1;
        }
        return ll.front();
    }
    // size function
    int size()
    {
        return ll.size();
    }
    // empty function
    bool empty()
    {
        return ll.size() == 0;
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
    //  s.push(1);
    //   s.push(2);
    //   s.push(3);
    s.pop();
    print(s);
    cout << "\n"
         << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}