#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ // heading
    cout << "  "
         << "\033[4;31;1m"
         << "ITEM NAME"
         << "\033[0m"
         << "  "
         << "\033[4;31;1m"
         << "QUANTITY"
         << "\033[0m"
         << "  "
         << "\033[4;31;1m"
         << "PRICE"
         << "\033[0m" << endl;
    // item 1
    cout << "  " << left << setw(12) << "Laptop" << setw(8) << 150 << fixed << setprecision(2) << right << setw(8) << 40822.2555 << endl;
    // item 2
    cout << "  " << left << setw(12) << "Mouse" << setw(8) << 20 << fixed << setprecision(2) << right << setw(8) << 40040.506 << endl;
    // item 3
    cout << "  " << left << setw(12) << "Keyboard" << setw(8) << 15 << fixed << setprecision(2) << right << setw(8) << 10500.2333 << endl;
    // item 4
    cout << "  " << left << setw(12) << "CPU box" << setw(8) << 50 << fixed << setprecision(2) << right << setw(8) << 60500.24584 << endl;
    // item 5
    cout << "  " << left << setw(12) << "Hard disk" << setw(8) << 10 << fixed << setprecision(2) << right << setw(8) << 10100.100 << endl;
    return 0;
}