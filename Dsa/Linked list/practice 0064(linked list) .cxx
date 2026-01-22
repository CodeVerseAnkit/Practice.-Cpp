#include <iostream>
using namespace std;
// node class
class node
{
  public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// list class
class list
{
    node *head;
    node *tail;

  public:
    list()
    {
        head = tail = NULL;
    }
    // push front
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    // push_back
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    // pop front
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "linked list is empty\n";
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // pop back
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty\n";
            return;
        }
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;

        delete tail;
        tail = temp;
    }
    // insert
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        node *newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    // print linked list
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    // search in linked list
    int search(int key)
    {
        node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};
int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(5);
    ll.pop_front();
    ll.insert(8, 1);
    ll.pop_back();
    ll.print();
    cout << "search: " << ll.search(2) << endl;
    return 0;
}