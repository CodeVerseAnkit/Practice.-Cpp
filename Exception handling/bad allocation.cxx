#include <iostream>
using namespace std;
int main()
{
    try
    {
        int *p = new int[1000000000000000];
        cout << "Memory allocation successfully " << endl;
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception in line 6." << endl
             << "Exception type: " << e.what() << endl;
    }
    return 0;
}