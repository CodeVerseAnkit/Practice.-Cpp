// <------- Circular Queue ------->

/*
--> circular queue implementation using array (fixed size)
--> circular_queue.h (header file)
*/

#pragma once

#include <iostream>
//using namespace std;

// circular_queue class
template <typename T>
class circular_queue
{
    T *arr;
    int capacity, curr_size;
    int f, r;

  public:
    // constructor
    circular_queue(int cap)
    {
        capacity = cap;
        arr = new T[capacity];
        curr_size = 0;
        f = 0, r = -1;
    }
    // distructor
    ~circular_queue()
    {
        delete[] arr;
    }
    // push()
    void push(T val)
    {
        if (curr_size == capacity)
        {
            std::cout << "Circular Queue Overflow\n";
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        curr_size++;
    }
    // pop()
    void pop()
    {
        if (curr_size == 0)
        {
            std::cout << " Circular Queue Underflow\n";
            return;
        }
        f = (f + 1) % capacity;
        curr_size--;
    }
    // f()
    T front()
    {
        if (curr_size == 0)
            throw std::out_of_range("circular queue is empty");
        return arr[f];
    }
    // empty()
    bool empty()
    {
        return curr_size == 0;
    }
    // current size ()
    int current_size()
    {
        return curr_size;
    }
    // print()
    void print()
    {
        if (curr_size == 0)
        {
            std::cout << " Circular Queue Underflow\n";
            return;
        }
        int size = curr_size;
        int i = f;
        while (size > 0)
        {
            std::cout << arr[i] << " ";
            i = (i + 1) % capacity;
            size--;
        }
        std::cout << std::endl;
    }
};
// <---------- (°_°) ---------->