#include <iostream>
#include <queue>
using namespace std;
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Queue: ";
    print(q);
    cout << "Size: " << q.size() << endl;
    return 0;
}