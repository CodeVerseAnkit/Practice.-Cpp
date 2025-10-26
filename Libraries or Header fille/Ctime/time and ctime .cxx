#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    cout << "Time in sec: " << t << endl;
    // human readable form
    cout << " Proper time: " << ctime(&t) << endl;
    return 0;
}