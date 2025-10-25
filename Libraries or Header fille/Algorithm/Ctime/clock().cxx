#include <iostream>
#include <ctime>
using namespace std;
int main()
{ // use of clock(), clock_t, and time difference
    // volatile tells the computer to do not ignore the loop
    volatile long long sink = 0;
    // cpu time before loop
    clock_t c1 = clock();
    // loop
    for (long long i = 0; i < 500'000'000LL; ++i)
        sink += i;
    // cpu time after loop
    clock_t c2 = clock();
    // difference in time in second
    double diff_sec = double(c2 - c1) / CLOCKS_PER_SEC;
    // print result
    cout << "Approx cpu time used by loop: " << diff_sec << " sec. " << endl;
    return 0;
}