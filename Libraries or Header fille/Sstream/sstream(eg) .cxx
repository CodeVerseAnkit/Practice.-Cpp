#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    // read and extract string
    istringstream iss("100 200 300");
    int a, b, c;
    iss >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    // write instring
    ostringstream oss;
    int num = 10;
    oss << "hello " << num << " world";
    oss.str();
    string str = oss.str();
    cout << str << endl;
    // read/write
    stringstream ss;
    ss << "100 200 300";
    int i, j, k;
    ss >> i >> j >> k;
    cout << i << " " << j << " " << k << endl;
    ss.str("500");
    cout << ss.str();
    return 0;
}