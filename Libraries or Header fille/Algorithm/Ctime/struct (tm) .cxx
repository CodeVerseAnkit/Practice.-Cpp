#include <iostream>
#include <ctime>
using namespace std;
int main()
{ // current time in sec
    time_t t = time(nullptr);
    // struct of local current time
    struct tm *lt = localtime(&t);
    // print current year(+1900 is important to get current year)
    cout << "Year: " << (lt->tm_year + 1900) << endl;
    // current month (stated from 0-31) , so +1 is important to get true month
    cout << "Month: " << (lt->tm_mon + 1) << endl;
    // current day according to month
    cout << "month day : " << (lt->tm_mday) << endl;
    // current day according to week

    cout << "week day: " << (lt->tm_wday) << endl;
    // current day according to year
    cout << "Year day: " << (lt->tm_yday) << endl;
    // current hour (24hr. form)
    cout << "Hour: " << (lt->tm_hour) << endl;
    // current minutes
    cout << "Minutes: " << (lt->tm_min) << endl;
    // current second
    cout << "Second: " << (lt->tm_sec) << endl;
    // daylight
    cout << "Daylight savings time flag: " << (lt->tm_isdst) << endl;
    return 0;
}