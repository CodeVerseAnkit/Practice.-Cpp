#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ // boolalpha
    cout << setw(10) << boolalpha << true << endl;
    cout << setw(10) << noboolalpha << true << endl;
    return 0;
}