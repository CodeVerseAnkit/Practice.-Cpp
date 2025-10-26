#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 123;
    // default setw
    cout << setw(6) << num << endl;
    // left+setw
    cout << left << setw(6) << num << endl;
    // right + setw
    cout << right << setw(6) << num << endl;
    // internal+setw
    cout << internal << setw(6) << -num << endl;
    return 0;
}