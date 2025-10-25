#include <iostream>
using namespace std;
// logic to find gcd of two number
int findgcd(int a, int b)
{ // edge cases
    if (a == 0 && b != 0)
    {
        return b;
    }
    else if (b == 0 && a != 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }

    int gcd = 1;
    // main logic
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "GCD of this two numbers : " << findgcd(num1, num2) << endl;
    return 0;
}