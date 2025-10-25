#include <iostream>

using namespace std;
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (isprime(num))
    {
        cout << " This is a prime number" << endl;
    }
    else
    {
        cout << "This is not a prime number " << endl;
    }
    return 0;
}