#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main()
{
    int sec;
    cout << "Set alarm (seconds): ";
    cin >> sec;

    auto wake = system_clock::now() + seconds(sec);
    sleep_until(wake);

    cout << "Wake up!\n";
    return 0;
}