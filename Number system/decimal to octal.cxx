#include <iostream>
using namespace std;
long long decimal_to_octal(long long n)
{
    long long ans = 0, power = 1;
    while (n > 0)
    {
        long long rem = n % 8;
        ans += (rem * power);
        n /= 8;
        power *= 10;
    }
    return ans;
}
int main()
{
    cout << decimal_to_octal(45) << endl;

    return 0;
}