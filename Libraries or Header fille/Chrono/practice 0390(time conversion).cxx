#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int hour;
    cout << "Enter hours: ";
    cin >> hour;
    auto min = duration_cast<minutes>(1h * hour);
    auto sec = duration_cast<seconds>(1h * hour);
    cout << hour << " hrs. = " << min.count() << "m." << endl;
    cout << hour << " hrs. = " << sec.count() << "s" << endl;
    return 0;
}