#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 245;
    cout << "Normal: " << num << endl;
    cout << "with setw: " << setw(10) << num << endl;
    cout << "with left+setw: " << left << setw(10) << num << endl;
    cout << "with right+setw: " << right << setw(10) << num << endl;
    cout << "with internal+setw: " << internal << setw(10) << -num << endl;
    return 0;
}