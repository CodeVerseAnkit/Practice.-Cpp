#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    // clocks
    auto clock1 = system_clock::now();
    auto clock2 = steady_clock::now();
    auto clock3 = high_resolution_clock::now();
    auto time1 = duration_cast<minutes>(clock1.time_since_epoch());
    auto time2 = duration_cast<minutes>(clock2.time_since_epoch());
    auto time3 = duration_cast<minutes>(clock3.time_since_epoch());
    cout << "System clock: " << time1.count() << endl;
    cout << "Steady clock: " << time2.count() << endl;
    cout << "High resolution clock: " << time3.count() << endl;
    return 0;
}