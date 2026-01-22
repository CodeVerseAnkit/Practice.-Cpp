#include <iostream>
using namespace std;
int main()
{
    try
    {
        // outer try
        try
        {
            // inner try
            throw runtime_error("inner error");
        }
        catch (const runtime_error &e)
        {
            cout << "Inner caught: " << e.what() << endl;
            throw; // rethrow
        }
    }
    catch (const exception &e)
    {
        cout << "Outer caught: " << e.what() << endl;
    }
    return 0;
}