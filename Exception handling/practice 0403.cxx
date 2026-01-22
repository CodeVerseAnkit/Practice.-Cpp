#include <iostream>
using namespace std;
int main()
{
    try
    {
        cout << "Hello" << endl;
        cout << "Coders" << endl;
        throw runtime_error("Hello bug");
        cout << "And programmes " << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}