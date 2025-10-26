#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num = 123.456;
    cout << "Normal: " << num << endl;
    cout << "with setprecision: " << setprecision(2) << num << endl;
    cout << "with fixed+setprecision: " << fixed << setprecision(2) << num << endl;
    cout << "with scientific+setprecision: " << scientific << setprecision(2) << num << endl;
    cout << "with defaultfloat: " << defaultfloat << num << endl;
    return 0;
}