#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *utc = gmtime(&t);
    cout << "utc(gmt) Time: " << utc->tm_hour << "h : " << utc->tm_min << "m : " << utc->tm_sec << "s " << endl;
    return 0;
}