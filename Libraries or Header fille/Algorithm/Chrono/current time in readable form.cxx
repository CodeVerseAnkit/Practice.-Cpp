#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
using namespace std::chrono;

int main()
{ // time_point_cast
    auto now = system_clock::now();

    auto sec = time_point_cast<seconds>(now);

    time_t t = system_clock::to_time_t(sec);
    cout << "Current time: " << ctime(&t) << endl;
    return 0;
}