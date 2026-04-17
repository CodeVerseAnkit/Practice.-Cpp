#include <iostream>
#include "/sdcard/Coding.Cpp/DSA/Queue/circular_queue.h"
using namespace std;
int main()
{
    circular_queue<string> cq(5);
    cq.push("hello");
    cq.push("computer");
    cq.push("coding");
    cq.push("programming");
    cq.push("AI");
    cq.push("full stack");
    cq.pop();
    cq.pop();
    cout << "Elements: ";
    cq.print();
    cout << "size: " << cq.current_size() << endl;
    cout << "front val: " << cq.front() << endl;
    return 0;
}