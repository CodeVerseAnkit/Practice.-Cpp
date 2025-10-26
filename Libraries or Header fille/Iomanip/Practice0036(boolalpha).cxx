#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Normal true: " << true << endl;
    cout << "normal false: " << false << endl;
    cout << "with boolalpha: " << boolalpha << true << endl;
    cout << "with boolalpha: " << boolalpha << false << endl;
    cout << noboolalpha << endl;
    return 0;
}