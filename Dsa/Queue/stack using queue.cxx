#include <iostream>
#include <queue>
using namespace std;
class MyStack
{
  public:
    queue<int> q1, q2;

    MyStack() {}

    void push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top() { return q1.front(); }

    bool empty() { return q1.empty(); }
};
int main()
{
    MyStack st;
    st.push(3);
    st.push(2);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;
    return 0;
}