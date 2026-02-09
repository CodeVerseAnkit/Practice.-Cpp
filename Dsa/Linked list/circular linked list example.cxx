#include <iostream>
#include "/sdcard/Coding.Cpp/DSA/Linked list/circular_linked_list.h"
using namespace std;
int main()
{
    circular_linked_list<string> cll;
    cll.push_front("1");
    cll.push_front("2");
    cll.push_front("3");
    cll.push_front("4");
    cll.push_front("5");
    cll.push_front("6");
    cll.push_back("7");
    cll.push_back("8");
    cll.pop_front();
    cll.pop_back();
    cll.insert("23", 2);
    cll.insert("33", 0);
    cll.insert("66", 8);
    cll.insert("34", 7);
    cll.print();
    cout << cll.search("5") << endl;
    cout << cll.search("1") << endl;
    cout << cll.search("55") << endl;
    cout << cll.search("7") << endl;
    cout << "size: " << cll.size() << endl;
    return 0;
}