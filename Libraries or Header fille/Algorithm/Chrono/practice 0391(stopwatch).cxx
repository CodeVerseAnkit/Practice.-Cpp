#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    cout << "Press Enter to start stopwatch: ";
    cin.get();
    auto time1 = system_clock::now();
    cout << " Stopwatch running.. " << endl;
    cout << " Press Enter to stop stopwatch: " << endl;
    cin.get();
    auto time2 = system_clock::now();
    auto stopwatch_time = duration_cast<seconds>(time2 - time1);
    cout << " Stopwatch Run time: " << stopwatch_time.count() << "s" << endl;
    return 0;
}