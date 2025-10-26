#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1 = 23, num2 = -46, num3 = -63;
    cout << left << setw(5) << num1 << right << setw(5) << num2 << internal << setw(5) << num3 << endl;
    return 0;
}