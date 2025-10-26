#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 50;
    cout << "[" << setfill('=') << setw(5) << " ]" << num << "%" << endl;

    return 0;
}