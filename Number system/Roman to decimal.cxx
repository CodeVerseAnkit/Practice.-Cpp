#include <iostream>
#include <unordered_map>
using namespace std;

int romanToDecimal(string roman)
{
    unordered_map<char, int> value = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int decimal = 0;

    for (int i = 0; i < roman.length(); i++)
    {
        int curr = value[roman[i]];
        int next = (i + 1 < roman.length()) ? value[roman[i + 1]] : 0;

        if (curr < next)
        {
            decimal -= curr; // subtractive case
        }
        else
        {
            decimal += curr;
        }
    }

    return decimal;
}

int main()
{
    cout << romanToDecimal("IX") << endl;      // 9
    cout << romanToDecimal("LVIII") << endl;   // 58
    cout << romanToDecimal("MCMXCIV") << endl; // 1994
    return 0;
}