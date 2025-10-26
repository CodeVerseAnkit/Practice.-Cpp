#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 45;
    cout << "Normal: " << num << endl;
    cout << "with uppercase+showbase+hex: " << uppercase << showbase << hex << num << endl;
    cout << "with uppercase+showbase+dec: " << dec << num << endl;
    cout << "with uppercase+showbase+oct: " << oct << num << endl;
    cout << nouppercase << noshowbase << dec << endl;
    return 0;
}