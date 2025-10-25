#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    tm t = {};
    cout << "Enter year: ";
    cin >> t.tm_year;
    cout << "Enter month: ";
    cin >> t.tm_mon;
    cout << "Enter day: ";
    cin >> t.tm_mday;

    time_t custom = mktime(&t);
    tm *lt = localtime(&custom);

    cout << "Details given by user:\n";
    cout << "year: " << lt->tm_year << endl;
    cout << "month: " << lt->tm_mon << endl;
    cout << "Month day: " << lt->tm_mday << endl;
    cout << "week day: " << lt->tm_wday << endl;

    return 0;
}