#include <iostream>
using namespace std;
int binary_to_decimal(int decimal)
{
    int ans = 0, power = 1;
    while (decimal > 0)
    {
        int rem = decimal % 10;
        ans += rem * power;
        decimal /= 10;
        power *= 2;
    }
    return ans;
}
int main()
{
    cout << binary_to_decimal(101101) << endl;
    return 0;
}