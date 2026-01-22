#include <iostream>
using namespace std;
// factorial using recursion
int factorial(int n)
{
    if (n == 0)
    { // base case
        return 1;
    }
    // call itself
    return n * factorial(n - 1);
}
int main()
{
    cout << "factorial: " << factorial(5) << endl;
    return 0;
}