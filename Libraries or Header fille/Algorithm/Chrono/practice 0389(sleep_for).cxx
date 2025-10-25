#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
int main()
{
    int sec;
    cout << "Enter delay time(in seconds) : ";
    cin >> sec;
    cout << "System in sleep mode 😴" << endl;
    this_thread::sleep_for(1s * sec);
    cout << "System wake up ⏰" << endl;
    return 0;
}