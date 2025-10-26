#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 12345.6789;
    cout << "Without any manipulator, num: " << num << endl;
    // setprecision
    cout << " With setprecision: " << setprecision(3) << num << endl;
    // fixed+setprecision
    cout << " With fixed+setprecision: " << fixed << setprecision(3) << num << endl;
    // scientific+setprecision
    cout << " With scientific+setprecision: " << scientific << setprecision(3) << num << endl;
    // reset
    cout << defaultfloat;
    return 0;
}