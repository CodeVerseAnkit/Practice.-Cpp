#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;
int main()
{ // time point conversion
    auto now = system_clock::now();
    auto in_sec = time_point_cast<seconds>(now);
    cout << "Raw time: " << in_sec.time_since_epoch().count() << endl;
    // time point -> time t
    time_t t = system_clock::to_time_t(in_sec);
    cout << " Current time: " << ctime(&t) << endl;
    // time t->time point
    time_t time = 170;
    auto new_time = system_clock::from_time_t(time);
    cout << " Time t-> time point: " << new_time.time_since_epoch().count() << endl;
    return 0;
}