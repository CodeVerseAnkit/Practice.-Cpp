#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ // heading
    cout << "   "
         << "\033[4;34;1m"
         << "NAME"
         << "\033[0m"
         << "  "
         << "\033[4;34;1m"
         << "ROLL NO"
         << "\033[0m"
         << "  "
         << "\033[4;34;1m"
         << "MARKS"
         << "\033[0m" << endl;
    // item 1
    cout << "   " << left << setw(10) << "Ankit" << setw(4) << 50 << fixed << setprecision(2) << right << setw(6) << 84.33 << endl;
    // item 2
    cout << "   " << left << setw(10) << "Mohit" << setw(4) << 80 << fixed << setprecision(2) << right << setw(6) << 69.699 << endl;
    // item 3
    cout << "   " << left << setw(10) << "Kushal" << setw(4) << 15 << fixed << setprecision(2) << right << setw(6) << 95.55 << endl;
    // item 4
    cout << "   " << left << setw(10) << "Chandu" << setw(4) << 66 << fixed << setprecision(2) << right << setw(6) << 34.333 << endl;
    // item 5
    cout << "   " << left << setw(10) << "Harsh" << setw(4) << 50 << fixed << setprecision(2) << right << setw(6) << 50.555 << endl;
    return 0;
}