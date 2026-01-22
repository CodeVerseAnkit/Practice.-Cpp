#include <iostream>
using namespace std;
int fib(int n)
{                         // Fibonacci number using recursion
    if (n == 0 || n == 1) // base case
        return n;
    // call itself
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout << "Fibonacci number: " << fib(6) << endl;
    return 0;
}