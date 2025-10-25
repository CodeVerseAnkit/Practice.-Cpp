#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto time1 = system_clock::now();
    cout << "time using system clock: " << duration_cast<milliseconds>(time1.time_since_epoch()).count() << endl;
    auto time2 = steady_clock::now();
    cout << "time using steady clock: " << duration_cast<milliseconds>(time2.time_since_epoch()).count() << endl;
    auto time3 = high_resolution_clock::now();
    cout << "time using high resolution clock: " << duration_cast<milliseconds>(time3.time_since_epoch()).count() << endl;
    return 0;
}