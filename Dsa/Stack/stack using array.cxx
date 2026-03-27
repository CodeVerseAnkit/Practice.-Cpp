#include <iostream>
using namespace std;
// Emplementaion of stack using array
class stack
{
    int arr[100];
    int topidx = -1;

  public:
    // push function
    void push(int val)
    {
        if (topidx >= 99)
        {
            cout << "Stack overflow " << endl;
            return;
        }
        topidx++;
        arr[topidx] = val;
    }
    // pop function
    void pop()
    {
        if (topidx < 0)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        topidx--;
    }
    // top function
    int top()
    {
        if (topidx < 0)
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[topidx];
    }
    // size function
    int size()
    {
        return topidx + 1;
    }
    // empty function
    bool empty()
    {
        return topidx == -1;
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

    return 0;
}