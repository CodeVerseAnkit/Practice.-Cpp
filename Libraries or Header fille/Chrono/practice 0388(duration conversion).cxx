#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    seconds s(5);
    milliseconds ms = s;
    cout << "seconds->milliseconds: " << ms.count() << endl;
    milliseconds time(48650);
    auto time_in_sec = duration_cast<seconds>(time);
    cout << "Milliseconds->seconds: " << time_in_sec.count() << endl;
    return 0;
}