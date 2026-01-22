#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw runtime_error("hello bug");
        }
        catch (const exception &e)
        {
            cout << "Inner exception " << endl;
            throw;
        }
    }
    catch (const exception &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}