#include <iostream>
#include <vector>
using namespace std;
string decimal_to_roman(int n)
{
    // roman number mapping
    vector<pair<int, string>> roman = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    // conversion
    string result = "";
    for (auto &v : roman)
    {
        while (n >= v.first)
        {
            result += v.second;
            n -= v.first;
        }
    }
    return result;
}
int main()
{
    cout << decimal_to_roman(45) << endl;
    return 0;
}