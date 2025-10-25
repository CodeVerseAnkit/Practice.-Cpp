#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{ // predefined duration types
    hours h(5);
    minutes m(2);
    seconds s(100);
    milliseconds milli(54);
    microseconds micro(55);
    nanoseconds nano(53);
    cout << "hours: " << h.count() << endl;
    cout << "minutes: " << m.count() << endl;
    cout << "seconds: " << s.count() << endl;
    cout << "milliseconds: " << milli.count() << endl;
    cout << "microseconds: " << micro.count() << endl;
    cout << "nanoseconds: " << nano.count() << endl;
    auto min = duration_cast<minutes>(s);
    cout << "second to minute: " << min.count() << endl;
    return 0;
}