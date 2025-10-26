#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "NUMBER SYSTEM: \n"
         << endl;
    cout << "  Hex  dec  Oct" << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "   " << left << setw(2) << hex << i << "   " << setw(2) << dec << i << "   " << setw(2) << oct << i << endl;
    }
    return 0;
}