#include <iostream>
using namespace std;
// logic to check a number is a Armstrong or not
bool isarmstrong(int n)
{
    int tempn = n;
    int sumofcube = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofcube += (digit * digit * digit);
        n /= 10;
    }
    return sumofcube == tempn;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (isarmstrong(num))
    {
        cout << "It is a Armstrong number" << endl;
    }
    else
    {
        cout << "It is not a Armstrong number " << endl;
    }
    return 0;
}