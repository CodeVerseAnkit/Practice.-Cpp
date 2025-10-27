#include <iostream>
#include <string>
using namespace std;
int octal_to_decimal(string bin)
{
    int decimal = 0;
    int power = 0;
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        decimal += (bin[i] - '0') * pow(8, power);

        power++;
    }
    return decimal;
}
int main()
{
    cout << octal_to_decimal("55") << endl;
    return 0;
}