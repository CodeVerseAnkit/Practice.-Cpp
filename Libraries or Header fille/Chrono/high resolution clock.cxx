#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{ // high resolution clock
    auto now = high_resolution_clock::now();

    auto t = duration_cast<nanoseconds>(now.time_since_epoch());
    cout << "Current time: " << t.count() << endl;
    return 0;
}