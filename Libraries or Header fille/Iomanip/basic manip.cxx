#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setw(6) << setfill('.') << 7 << endl;
    cout << setw(6) << setfill('.') << 123 << endl;
    cout << setw(6) << setfill('.') << 4567 << endl;

    return 0;
}