#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto time = system_clock::now();
    auto time_in_sec = duration_cast<seconds>(time.time_since_epoch());
    cout << "Current time in seconds: " << time_in_sec.count() << endl;
    return 0;
}