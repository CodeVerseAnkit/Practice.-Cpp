#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
int main()
{
    cout << "Hello! " << endl;
    sleep_for(3s);
    cout << "World! " << endl;
    return 0;
}