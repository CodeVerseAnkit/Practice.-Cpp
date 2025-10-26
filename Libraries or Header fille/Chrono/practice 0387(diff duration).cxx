#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
int main()
{
    auto time1 = system_clock::now(); // delay time
    this_thread::sleep_for(3s);
    auto time2 = system_clock::now();
    auto duration = duration_cast<seconds>(time2 - time1);
    cout << "Time taken by this loop (in seconds) : " << duration.count() << endl;

    return 0;
}