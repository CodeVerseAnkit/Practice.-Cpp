#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{ // steady clock
    auto time1 = steady_clock::now();
    for (int i = 0; i < 100000000; i++)
    {
    }
    auto time2 = steady_clock::now();
    auto diff = duration_cast<milliseconds>(time2 - time1);
    cout << "Time difference: " << diff.count() << endl;
    return 0;
}