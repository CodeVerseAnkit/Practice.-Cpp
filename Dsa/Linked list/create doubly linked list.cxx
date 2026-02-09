#include <iostream>
using namespace std;
// doubly linked list
class node
{
  public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        next = prev = NULL;
    }
};
class doubly_linked_list
{
    node *head;
    node *tail;

  public:
    doubly_linked_list()
    {
        head = tail = NULL;
    }
    // push front in dll
    void push_front(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    // push back in dll
    void push_back(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }
    // pop front in dll

    void pop_front()
    {
        if (head == NULL)
            return;
        node *temp = head;
        head = head->next;
        if (head != NULL)
            ;
        head->prev = NULL;
        temp->next == NULL;
        delete temp;
    }
    // pop back in dll
    void pop_back()
    {
        if (head == NULL)
            return;
        node *temp = tail;
        tail = tail->prev;
        if (tail != NULL)
            ;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    // insert at any place
    void insert(int data, int pos)
    {
        if (pos < 0)

            return;

        if (pos == 0)
        {
            push_front(data);

            return;
        }
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)

                return;

            temp = temp->next;
        }
        node *newnode = new node(data);
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp = temp->next;
        temp->next->prev = newnode;
    }
    // print dll
    void print()
    {
        if (head == NULL)
            return;
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<—>";
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
            if (temp->val == key)
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
    doubly_linked_list dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_front(5);
    dll.push_back(6);
    dll.push_back(7);
    dll.push_back(8);
    dll.pop_front();
    dll.pop_back();
    dll.insert(22, 2);
    dll.print();
    cout << "search: " << dll.search(2) << endl;
    return 0;
}