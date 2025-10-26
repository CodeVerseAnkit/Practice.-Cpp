#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    tm t = {};
    cout << "Enter year: ";
    cin >> t.tm_year;
    cout << "Enter month: ";
    cin >> t.tm_mon;
    cout << "Enter day: ";
    cin >> t.tm_mday;
    cout << "Details given by user:\n";
    cout << "year: " << t.tm_year << endl;
    cout << "month: " << t.tm_mon << endl;
    cout << "day: " << t.tm_mday << endl;

    return 0;
}