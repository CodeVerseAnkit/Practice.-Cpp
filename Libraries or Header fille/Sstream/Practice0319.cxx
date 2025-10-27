#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string num = "123 456 789";
    istringstream iss(num);
    int a, b, c;
    iss >> a >> b >> c;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    return 0;
}