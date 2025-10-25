#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;
int main()
{ // curr time in human readable form
    auto time = system_clock::now();
    // convert time precision
    auto time_in_sec = time_point_cast<seconds>(time);
    // convert time point to time t
    time_t curr_time = system_clock::to_time_t(time_in_sec); // print time
    tm *lt = localtime(&curr_time);
    cout << "Current time: " << lt->tm_hour << ":" << lt->tm_min << ":" << lt->tm_sec << endl;
    return 0;
}