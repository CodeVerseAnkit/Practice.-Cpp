#include <iostream>
using namespace std;
// node class
class node
{
  public:
    int data;   // store data
    node *next; // store address of next data

    // constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// class list
class list
{
    node *head; // store address of first data
    node *tail; // store address of last daat
  public:
    // constructor
    list()
    {
        head = tail = NULL;
    }
    // push_back function
    void push_front(int val)
    {
        node *newnode = new node(val); // dynamic
        // node newnodw(val);// static
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    // push back function
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            tail = head = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // pop front function
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

    // pop back function
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "linked list is empty\n";
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
    // insert at any place
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
    // print function
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    // search in ll
    int search(int key)
    {
        int idx = 0;
        node *temp = head;
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
    ll.printll();
    cout << "search: " << ll.search(2) << endl;
    return 0;
}