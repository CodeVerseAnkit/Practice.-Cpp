#include <iostream>
using namespace std;
void zero_division(double d)
{
    if (d == 0)
        throw runtime_error("Division by Zero not allowed");
}
int main()
{
    double a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter Operation (+,-,/,*): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
    if (op == '+')
        cout << "Result: " << a << op << b << " = " << (a + b) << endl;
    else if (op == '-')
        cout << "Result: " << a << op << b << " = " << (a - b) << endl;
    else if (op == '*')
        cout << "Result: " << a << op << b << " = " << (a * b) << endl;
    else
        try
        {
            zero_division(b);
            cout << "Result: " << a << op << b << " = " << (a / b) << endl;
        }
        catch (const runtime_error &e)
        {
            cout << "Result: " << e.what() << endl;
        }
    return 0;
}