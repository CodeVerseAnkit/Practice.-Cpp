#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto time1 = high_resolution_clock::now();
    cout << "Loop start... " << endl;
    for (long long i = 0; i < 1e9; i++)
    {
    }
    cout << "Loop end " << endl;
    auto time2 = high_resolution_clock::now();
    auto diff = duration_cast<seconds>(time2 - time1);
    cout << "Time taken by this loop (in seconds) : " << diff.count() << endl;

    return 0;
}