#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Sample numbers
    int a = 42, b = -42;
    double x = 123.456, y = 78.0;

    cout << "===== WIDTH & FILL =====\n";
    cout << setw(10) << a << endl;                         // "        42"  (default right)
    cout << setfill('*') << setw(10) << a << endl;         // "********42"
    cout << setfill(' ') << setw(10) << left << a << endl; // "42        "

    cout << "\n===== PRECISION & FLOAT =====\n";
    cout << x << endl;                             // 123.456
    cout << setprecision(2) << x << endl;          // 1.2e+02 (depends on defaultfloat)
    cout << fixed << setprecision(2) << x << endl; // 123.46
    cout << scientific << x << endl;               // 1.234560e+02
    cout << defaultfloat << x << endl;             // back to normal
    cout << showpoint << y << endl;                // 78.000
    cout << noshowpoint << y << endl;              // 78

    cout << "\n===== ALIGNMENT =====\n";
    cout << right << setw(10) << a << endl;    // "        42"
    cout << left << setw(10) << a << endl;     // "42        "
    cout << internal << setw(10) << b << endl; // "      -42" (sign left, number right)

    cout << "\n===== BOOL & POSITIVE =====\n";
    cout << boolalpha << true << " " << false << endl;   // true false
    cout << noboolalpha << true << " " << false << endl; // 1 0
    cout << showpos << a << " " << b << endl;            // +42 -42
    cout << noshowpos << a << endl;                      // 42

    cout << "\n===== BASE & CASE =====\n";
    cout << dec << a << endl;                // 42
    cout << hex << a << endl;                // 2a
    cout << oct << a << endl;                // 52
    cout << showbase << hex << a << endl;    // 0x2a
    cout << uppercase << hex << a << endl;   // 0X2A
    cout << nouppercase << hex << a << endl; // 0x2a
    cout << noshowbase << dec << a << endl;  // 42

    cout << "\n===== COMBINATION EXAMPLE =====\n";
    cout << showpos << internal << setw(10) << -123 << endl;    // "      -123"
    cout << fixed << setprecision(3) << showpoint << x << endl; // 123.456

    return 0;
}