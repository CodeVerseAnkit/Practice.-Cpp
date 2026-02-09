// doubly linked list header file
#pragma once
#include <iostream>

template <typename T>
// node class
class node
{
  public:
    T val;
    node<T> *next;
    node<T> *prev;
    node(T val)
    {
        this->val = val;
        next = prev = NULL;
    }
};
template <typename T>
// list class
class doubly_linked_list
{
    node<T> *head;
    node<T> *tail;

  public:
    doubly_linked_list()
    {
        head = tail = NULL;
    }
    // push front in dll
    void push_front(T data)
    {
        node<T> *newnode = new node<T>(data);
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
    void push_back(T data)
    {
        node<T> *newnode = new node<T>(data);
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
        node<T> *temp = head;
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
        node<T> *temp = tail;
        tail = tail->prev;
        if (tail != NULL)
            ;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    // insert at any place
    void insert(T data, int pos)
    {
        if (pos < 0)

            return;

        if (pos == 0)
        {
            push_front(data);

            return;
        }
        node<T> *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)

                return;

            temp = temp->next;
        }
        node<T> *newnode = new node<T>(data);
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
        node<T> *temp = head;
        while (temp != NULL)
        {
            std::cout << temp->val << "<—>";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
    // search in ll
    int search(int key)
    {
        int idx = 0;
        node<T> *temp = head;
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
