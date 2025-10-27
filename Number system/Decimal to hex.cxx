#include <iostream>
using namespace std;
string decimal_to_hex(long long num)
{
    string hex = "";
    char ch[] = "0123456789ABCDEF";
    while (num > 0)
    {
        int rem = num % 16;
        hex = ch[rem] + hex;
        num /= 16;
    }
    return hex;
}
int main()
{
    cout << decimal_to_hex(12) << endl;
    return 0;
}