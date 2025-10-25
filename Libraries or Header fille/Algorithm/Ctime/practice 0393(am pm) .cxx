#include <iostream>
#include <ctime>
using namespace std;
int main()
{ // current time
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    // extract hour and time
    int hour = lt->tm_hour;
    int minute = lt->tm_min;
    // find period
    string period = hour < 12 ? "AM" : "PM";
    // convert 24 format to 12
    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;
    // print current time
    cout << "Time: " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
    return 0;
}