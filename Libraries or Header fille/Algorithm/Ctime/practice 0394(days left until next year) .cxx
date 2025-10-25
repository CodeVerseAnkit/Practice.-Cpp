#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t1 = time(nullptr);
    tm *lt = localtime(&t1);
    tm nexty = {};
    nexty.tm_year = lt->tm_year + 1;
    nexty.tm_mon = 0;
    nexty.tm_mday = 1;
    nexty.tm_hour = 0;
    nexty.tm_min = 0;
    nexty.tm_sec = 0;
    time_t t2 = mktime(&nexty);
    time_t diff = difftime(t2, t1);
    int days_left = diff / (60 * 60 * 24);

    cout
        << "Days left until new year: " << days_left << endl;

    tm *ltl = localtime(&diff);
    cout << "\n"
         << "month left: " << ltl->tm_mon << "\ndays left: " << ltl->tm_yday << "\nhour left: " << ltl->tm_hour << "\nminute left: " << ltl->tm_min << "\nsecond left: " << ltl->tm_sec << endl;
    return 0;
}