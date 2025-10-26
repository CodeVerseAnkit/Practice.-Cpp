#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // heading
    cout << fixed << setprecision(1);
    cout << "  "
         << "\033[31;1m" << left << setw(10) << "Celsius"
         << "\033[0m";

    cout << "\033[31;1m" << left << setw(10) << "Fahrenhit"
         << "\033[0m" << endl;
    cout << string(25, '-') << endl;
    for (int c = 0; c <= 100; c += 10)
    {
        double f = (9.0 / 5.0) * c + 32;
        cout << "  " << left << setw(10) << c << setw(10) << f << endl;
    }
    return 0;
}