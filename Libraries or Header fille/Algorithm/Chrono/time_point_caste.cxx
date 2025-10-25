#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{ // time_point_cast
    auto now = system_clock::now();
    cout << "normal time: " << now.time_since_epoch().count() << endl;
    auto sec = time_point_cast<seconds>(now);

    cout << "time point caste: " << sec.time_since_epoch().count() << endl;

    return 0;
}