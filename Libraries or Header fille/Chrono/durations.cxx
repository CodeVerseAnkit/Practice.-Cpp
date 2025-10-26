#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;
int main()
{ // durations
    duration<int> t1(5);
    duration<int, std::milli> t2(4);
    duration<int, std::nano> t3(3);
    duration<double> t4(2.5);

    cout << "seconds: " << t1.count() << endl;
    cout << " milliseconds: " << t2.count() << endl;
    cout << " nanoseconds: " << t3.count() << endl;
    cout << " minutes: " << t4.count() << endl;

    return 0;
}