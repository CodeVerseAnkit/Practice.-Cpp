#include <iostream>
#include "/sdcard/Coding.Cpp/DSA/Linked List/linked_list.h"
using namespace std;
int main()
{
    linked_list<string> name;
    name.push_back("ankit");
    name.push_back("Rahul");
    name.push_back("sahil");
    name.push_back("naruto");
    name.push_front("loffy");
    name.pop_front();
    name.pop_back();
    name.insert("rohan", 1);
    name.print();
    cout << "search in linked list: " << name.search("ankit") << endl;
    return 0;
}