// Linked List class //-_-

#pragma once

#include <iostream>
//using namespace std;

template <typename T>
// node class
class node
{
  public:
    T data;        // store data
    node<T> *next; // store address of next data

    // constructor
    node(T val)
    {
        data = val;
        next = NULL;
    }
};

// class list
template <typename T>
class linked_list
{
    node<T> *head; // store address of first data
    node<T> *tail; // store address of last daat
  public:
    // constructor
    linked_list()
    {
        head = tail = NULL;
    }
    // push_back function
    void push_front(T val)
    {
        node<T> *newnode = new node<T>(val); // dynamic
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
    void push_back(T val)
    {
        node<T> *newnode = new node<T>(val);
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
            std::cout << "linked list is empty\n";
            return;
        }
        node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // pop back function
    void pop_back()
    {
        if (head == NULL)
        {
            std::cout << "linked list is empty\n";
            return;
        }
        node<T> *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    // insert at any place
    void insert(T val, int pos)
    {
        if (pos < 0)
        {
            std::cout << "Invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);

            return;
        }
        node<T> *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                std::cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        node<T> *newnode = new node<T>(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    // print function
    void print()
    {
        node<T> *temp = head;
        while (temp != NULL)
        {
            std::cout << temp->data << "->";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
    // search in ll
    int search(T key)
    {
        int idx = 0;
        node<T> *temp = head;
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
