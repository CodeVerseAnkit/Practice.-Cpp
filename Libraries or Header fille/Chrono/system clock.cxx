#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;

int main()
{ // system clock
    auto now = system_clock::now();

    time_t t = system_clock::to_time_t(now);
    cout << "Current time: " << ctime(&t) << endl;
    return 0;
}