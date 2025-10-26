#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    // tm struct

    tm date1 = {};
    tm date2 = {};
    // get date 1 from user
    cout << "Enter date1(d/m/y) : ";
    cin >> date1.tm_mday >> date1.tm_mon >> date1.tm_year;
    // normalizing date acc. to epoch
    date1.tm_mon -= 1;
    date1.tm_year -= 1900;
    // get date 2 from user
    cout << "Enter date2(d/m/y) : ";
    cin >> date2.tm_mday >> date2.tm_mon >> date2.tm_year;
    // normalizing date

    date2.tm_mon -= 1;
    date2.tm_year -= 1900;
    // convert date into second using mktime()
    time_t timesec1 = mktime(&date1);
    time_t timesec2 = mktime(&date2);
    // find difference from difftime
    double diffsec = difftime(timesec2, timesec1);
    // convert seconds into days
    double days = (diffsec / (60 * 60 * 24));
    cout << "Difference between this date: " << days << endl;
    return 0;
}