#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "\033[31m"
         << "Table of 2"
         << "\033[0m" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << 2 << "*" << left << setw(3) << i << "=" << right << setw(3) << 2 * i << endl;
    }
    return 0;
}