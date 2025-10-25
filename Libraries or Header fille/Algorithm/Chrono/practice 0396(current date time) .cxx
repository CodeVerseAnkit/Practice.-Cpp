#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;
using namespace std::chrono;
int main()
{
    cout << "Current time: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        auto time = system_clock::now();
        time_t t = system_clock::to_time_t(time);
        cout << ctime(&t);
        this_thread::sleep_for(1s);
    }
    cout << " Bye 👋" << endl;
    return 0;
}