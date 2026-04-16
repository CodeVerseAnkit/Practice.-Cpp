#include <iostream>
using namespace std;
class Node
{
  public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class queue
{
    Node *head;
    Node *tail;

  public:
    // constructor
    queue()
    {
        head = tail = NULL;
    }
    // push()
    void push(int data)
    {
        Node *newnode = new Node(data);
        if (empty())
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
    }
    // pop()
    void pop()
    {
        if (empty())
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    // front()
    int front()
    {
        if (empty())
            return -1;
        return head->val;
    }
    // empty()
    bool empty()
    {
        return head == NULL;
    }
    // size()
    int size()
    {
        Node *temp = head;
        int size = 0;
        while (temp)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
};
void print(queue q)
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
    queue q;
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