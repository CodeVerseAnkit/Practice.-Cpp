#include <iostream>
using namespace std;
// circular linked list implementation
// node class
class node
{
  public:
    int val;
    node *next;
    // constructor
    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
//
class circular_linked_list
{
  private:
    node *head;
    node *tail;

  public:
    // constructor
    circular_linked_list()
    {
        head = tail = NULL;
    }
    // push front function
    void push_front(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    // push back function
    void push_back(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;

            tail->next = newnode;
            tail = newnode;
        }
    }
    // pop front function
    void pop_front()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    // pop back function
    void pop_back()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = tail;
            node *prev = head;
            while (prev->next != tail)
                prev = prev->next;
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    // print function
    void print()
    {
        if (head == NULL)
            return;
        node *temp = head->next;

        cout << head->val;
        while (temp != head)
        {
            cout << "->" << temp->val;
            temp = temp->next;
        }
        cout << "->" << head->val << endl;
    }
    // search in ll
    int search(int key)
    {
        int idx = 1;
        if (head->val == key)
            return 0;
        node *temp = head->next;

        while (temp != head)
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
    // size of circular linked list
    int size()
    {
        if (head == NULL)
            return 0;
        if (head->next == NULL)
            return 1;

        node *temp = head->next;

        int s = 1;
        while (temp != head)
        {
            s++;
            temp = temp->next;
        }
        return s;
    }
    // insert at any place
    void insert(int data, int pos)
    {
        if (pos < 0)
            return;
        if (pos >= size())
            return;
        if (pos == 0)
        {
            push_front(data);

            return;
        }

        if (pos == size() - 1)
        {
            push_back(data);
            return;
        }
        node *temp = head->next;
        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                return;
            }
            temp = temp->next;
        }
        node *newnode = new node(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
};
int main()
{
    circular_linked_list cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.push_front(4);
    cll.push_front(5);
    cll.push_front(6);
    cll.push_back(7);
    cll.push_back(8);
    cll.pop_front();
    cll.pop_back();
    cll.insert(23, 2);
    cll.insert(33, 0);
    cll.insert(66, 8);
    cll.insert(34, 7);
    cll.print();
    cout << cll.search(5) << endl;
    cout << cll.search(1) << endl;
    cout << cll.search(55) << endl;
    cout << cll.search(7) << endl;
    cout << "size: " << cll.size() << endl;
    return 0;
}