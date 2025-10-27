#include <iostream>
using namespace std;
int binary_to_decimal(string bin)
{
    int decimal = 0;
    int power = 0;
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}
int main()
{
    cout << binary_to_decimal("101101") << endl;
    return 0;
}