#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string num = "45.6 78.9";
    istringstream iss(num);
    double a, b;
    iss >> a >> b;
    cout << "a: " << a << " b: " << b << endl
         << "a+b= " << a + b << endl;
    return 0;
}