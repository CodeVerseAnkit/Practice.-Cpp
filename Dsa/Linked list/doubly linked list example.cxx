#include <iostream>
#include "/sdcard/Coding.Cpp/DSA/Linked List/doubly_linked_list.h"
using namespace std;
int main()
{
    doubly_linked_list<int> dll;
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