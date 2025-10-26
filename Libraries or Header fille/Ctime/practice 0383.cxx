#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    cout << "Current Time: " << lt->tm_hour << " " << lt->tm_min << " " << lt->tm_sec << endl;
    return 0;
}