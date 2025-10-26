#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread; // for sleep_for, sleep_until

int main()
{
    cout << "Waiting for 3 seconds...\n";
    sleep_for(3s); // using chrono literal
    cout << "Done!\n";
    auto wake_time = system_clock::now() + 5s;
    sleep_until(wake_time);
    cout << "5 seconds later!\n";
    return 0;
}