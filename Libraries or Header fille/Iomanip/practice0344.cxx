#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num = 636.63379;
    cout << showpoint << showpos << uppercase << scientific << num << endl;
    return 0;
}