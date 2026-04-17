#include <iostream>
using namespace std;
class circular_queue
{
    int *arr;
    int capacity, curr_size;
    int f, r;

  public:
    // constructor
    circular_queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        curr_size = 0;
        f = 0, r = -1;
    }
    // push()
    void push(int val)
    {
        if (curr_size == capacity)
            return;
        r = (r + 1) % capacity;
        arr[r] = val;
        curr_size++;
    }
    // pop()
    void pop()
    {
        if (curr_size == 0)
            return;
        f = (f + 1) % capacity;
        curr_size--;
    }
    // f()
    int front()
    {
        if (curr_size == 0)
            return -1;
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
        int size = curr_size;
        int i = f;
        while (size > 0)
        {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
            size--;
        }
        cout << endl;
    }
};
int main()
{
    circular_queue cq(5);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.push(6);
    cq.pop();
    cq.pop();
    cout << "Elements: ";
    cq.print();
    cout << "size: " << cq.current_size() << endl;
    cout << "front val: " << cq.front() << endl;
    return 0;
}