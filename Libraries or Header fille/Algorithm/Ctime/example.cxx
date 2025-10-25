// filename: time_basics.cpp
#include <iostream>
#include <ctime>

int main()
{
    // current calendar time (seconds since epoch)
    std::time_t t = std::time(nullptr);
    std::cout << "time_t (seconds since epoch): " << t << '\n';

    // ctime -> human readable string (adds newline)
    std::cout << "ctime(): " << std::ctime(&t);

    // struct tm from time_t (local time)
    std::tm *lt = std::localtime(&t); // not thread-safe
    std::cout << "Year: " << (lt->tm_year + 1900) << '\n';
    std::cout << "Month: " << (lt->tm_mon + 1) << " (tm_mon is 0-based)\n";
    std::cout << "Day: " << lt->tm_mday << '\n';
    std::cout << "Hour: " << lt->tm_hour << " Minute: " << lt->tm_min << " Sec: " << lt->tm_sec << '\n';

    // simple CPU time measurement (preventing optimizer with volatile)
    volatile long long sink = 0;
    std::clock_t c1 = std::clock();
    for (long long i = 0; i < 1000'000'000LL; ++i)
        sink += i;
    std::clock_t c2 = std::clock();
    double cpu_seconds = double(c2 - c1) / CLOCKS_PER_SEC;
    std::cout << "Approx CPU time used by loop: " << cpu_seconds << " seconds\n";

    return 0;
}