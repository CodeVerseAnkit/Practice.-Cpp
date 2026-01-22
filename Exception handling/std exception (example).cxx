#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        throw runtime_error("File not found");
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
}