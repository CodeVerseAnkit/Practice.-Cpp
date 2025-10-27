#include <iostream>
using namespace std;
long long decimal_to_binary(long long n)
{
    long long ans = 0, power = 1;
    while (n > 0)
    {
        long long rem = n % 2;
        ans += (rem * power);
        n /= 2;
        power *= 10;
    }
    return ans;
}
int main()
{
    cout << decimal_to_binary(45) << endl;

    return 0;
}