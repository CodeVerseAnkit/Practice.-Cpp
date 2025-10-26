#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;
int main()
{
    auto now = system_clock::now();
    tm start_tm = {};
    start_tm.tm_year = 2025 - 1900;
    start_tm.tm_mon = 0;
    start_tm.tm_mday = 1;
    start_tm.tm_hour = 0;
    start_tm.tm_min = 0;
    start_tm.tm_sec = 0;
    time_t start_tm_t = mktime(&start_tm);
    auto start = system_clock::from_time_t(start_tm_t);
    auto diff = now - start;
    auto hour = duration_cast<hours>(diff);
    auto minute = duration_cast<minutes>(diff % hours(1));
    auto second = duration_cast<seconds>(diff % minutes(1));
    cout << "Time passed from 1 Jan 2025: " << hour.count() << "hr:" << minute.count() << "min:" << second.count() << "s" << endl;
    return 0;
}