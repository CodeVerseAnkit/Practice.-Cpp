#include <iostream>
#include <chrono> // h file
using namespace std;
using namespace std::chrono; // for chrono
int main()
{
    auto start = high_resolution_clock::now();

    for (long long i = 0; i < 100000; i++)
    {
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "Time difference: " << duration.count() << " ms" << endl;
    return 0;
}