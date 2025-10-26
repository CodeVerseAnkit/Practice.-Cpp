#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    tm t = {};
    t.tm_year = 2025 - 1900; // years since 1900
    t.tm_mon = 9;            // October (0 = Jan, so 9 = Oct)
    t.tm_mday = 2;
    t.tm_hour = 15;
    t.tm_min = 30;
    t.tm_sec = 0;
    // use of mktime()
    time_t custom = mktime(&t);
    cout << "Custom time_t: " << custom << "\n";
    cout << "As string: " << ctime(&custom);
}