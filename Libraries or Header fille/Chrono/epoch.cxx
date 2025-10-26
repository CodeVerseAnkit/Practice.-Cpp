#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{ // epoch
    auto now = system_clock::now();
    auto since_epoch = now.time_since_epoch(); // duration since 1970
    auto sec = duration_cast<seconds>(since_epoch);
    cout << "Seconds since epoch: " << sec.count() << "\n";
}