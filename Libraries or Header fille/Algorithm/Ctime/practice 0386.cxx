#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t1 = time(nullptr);
    time_t t2 = time(0);

    cout << "time(null): " << t1 << endl;
    cout << " time(0) : " << t2 << endl;

    return 0;
}