#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *utc = gmtime(&t);
    cout << "UTC: " << utc->tm_hour << ":" << utc->tm_min << "\n";
    return 0;
}