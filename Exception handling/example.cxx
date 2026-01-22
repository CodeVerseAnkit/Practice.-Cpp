#include <iostream>
using namespace std;
int main()
{
    int numerator, denominator, result;
    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;
    try
    {
        if (denominator == 0)
            throw denominator;
        result = numerator / denominator;
        cout << "division is: " << result << endl;
    }
    catch (int ex)
    {
        cout
            << "Invalid number: " << ex << endl;
    }

    return 0;
}