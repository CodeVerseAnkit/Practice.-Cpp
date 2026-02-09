// circular linked list implementation (header file)
#include <iostream>
template <typename T>
// node<T> class
class node
{
  public:
    T val;
    node<T> *next;
    // constructor
    node(T val)
    {
        this->val = val;
        next = NULL;
    }
};
template <typename T>
//
class circular_linked_list
{
  private:
    node<T> *head;
    node<T> *tail;

  public:
    // constructor
    circular_linked_list()
    {
        head = tail = NULL;
    }
    // push front function
    void push_front(T data)
    {
        node<T> *newnode = new node<T>(data);
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
    void push_back(T data)
    {
        node<T> *newnode = new node<T>(data);
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
            node<T> *temp = head;
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
            node<T> *temp = tail;
            node<T> *prev = head;
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
        node<T> *temp = head->next;

        std::cout << head->val;
        while (temp != head)
        {
            std::cout << "->" << temp->val;
            temp = temp->next;
        }
        std::cout << "->" << head->val << std::endl;
    }
    // search in ll
    int search(T key)
    {
        int idx = 1;
        if (head->val == key)
            return 0;
        node<T> *temp = head->next;

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

        node<T> *temp = head->next;

        int s = 1;
        while (temp != head)
        {
            s++;
            temp = temp->next;
        }
        return s;
    }
    // insert at any place
    void insert(T data, int pos)
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
        node<T> *temp = head->next;
        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                return;
            }
            temp = temp->next;
        }
        node<T> *newnode = new node<T>(data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
};