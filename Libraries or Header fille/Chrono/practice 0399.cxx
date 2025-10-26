#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto time1 = system_clock::now();
    auto time2 = high_resolution_clock::now();
    auto time1_in_nano = duration_cast<nanoseconds>(time1.time_since_epoch());
    auto time2_in_nano = duration_cast<nanoseconds>(time2.time_since_epoch());
    cout << " System clock in nanoseconds: \n  " << time1_in_nano.count() << endl;
    cout << " High resolution clock in nanoseconds: \n  " << time2_in_nano.count() << endl;

    return 0;
}