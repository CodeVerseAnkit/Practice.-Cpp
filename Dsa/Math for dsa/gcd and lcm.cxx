#include <iostream>
using namespace std;
// gcd by EUCLID's Algorithm
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
// Gcd by recursive method
int gcdrec(int a, int b)
{
    if (b == 0)
        return a;
    return gcdrec(b, a % b);
}
/* lcm by using gcd
  a*b=gcd(a, b)*lcm(a, b)
  lcm=a*b/gcd(a, b)
  
*/

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a, b;
    cout << " Enter First number: ";
    cin >> a;
    cout << " Enter second number: ";
    cin >> b;
    cout << " GCD of this two number: " << gcd(a, b) << endl;
    cout << " GCD by recursive method: " << gcdrec(a, b) << endl;
    cout << " LCM of this two number: " << lcm(a, b) << endl;
    return 0;
}