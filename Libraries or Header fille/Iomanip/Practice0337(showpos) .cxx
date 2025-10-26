#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 245;
    cout << "Normal: " << num << endl;
    cout << "with showpos: " << showpos << num << endl;
    cout << "with showpos: " << -num << endl;
    cout << "with noshowpos: " << noshowpos << num << endl;

    return 0;
}