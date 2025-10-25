#include <iostream>
using namespace std;
double mypow(double x, int n)
{
    // edge cases
    if (n == 0)
    {
        return 1.0;
    }
    if (x == 0)
    {
        return 0.0;
    }
    if (x == 1)
    {
        return 1.0;
    }
    if (x == -1 && n % 2 == 0)
    {
        return 1.0;
    }
    if (x == -1 && n % 2 != 0)
    {
        return -1.0;
    }
    // -ve power to +ve
    long binform = n;
    if (n < 0)
    {
        x = 1 / x;
        binform = -binform;
    }
    // main code
    double ans = 1;
    while (binform > 0)
    {
        if (binform % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}
int main()
{
    double num = 5;
    int power = 2;
    cout << "Answer: " << mypow(num, power) << endl;
    return 0;
}