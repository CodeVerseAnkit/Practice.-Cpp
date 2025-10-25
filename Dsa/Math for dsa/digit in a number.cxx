#include <iostream>
using namespace std;
void printdigit(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Digit in this number: ";
    printdigit(num);

    // shortcut to count digit of a number
    cout << "\nTotal number of digits in this number: " << (int)(log10(num) + 1) << endl;
    return 0;
}