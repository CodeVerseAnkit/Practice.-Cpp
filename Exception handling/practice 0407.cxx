#include <iostream>
using namespace std;
void finderror(int age)
{
    try
    {
        if (age <= 0 || age >= 100)
            throw runtime_error("Invalid age");
    }
    catch (const exception &e)
    {
        cout << ": age cannot be less than 0 and greater than 100!" << endl;
        throw;
    }
}
int main()
{
    try
    {
        finderror(4674);
    }
    catch (const exception &e)
    {
        cout << e.what();
    }
    return 0;
}