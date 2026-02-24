#include <iostream>
using namespace std;
// bit manipulation
// check power of two
bool ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}
// check odd even
void check_odd_even(int n)
{
    if (n & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
}
//swap two number
void swap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}
int main()
{
    cout << "power of 2: " << ispowerof2(16) << endl;
    cout << "power of 2: " << ispowerof2(10) << endl;
    check_odd_even(5);
    check_odd_even(6);
    int a = 5, b = 7;
    swap(a, b);
    cout << " a= " << a << "\n b= " << b << endl;
    return 0;
}