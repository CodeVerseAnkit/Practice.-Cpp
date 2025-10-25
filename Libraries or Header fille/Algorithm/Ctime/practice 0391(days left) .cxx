#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    int days_left = 365 - (lt->tm_yday);
    cout << "Current year day: " << lt->tm_yday << endl;
    cout << " Days left: " << days_left << endl;
    return 0;
}