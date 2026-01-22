#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw runtime_error("Hello error");
    }
    catch (const exception &e)
    {
        cout << "Exception: (exception)" << e.what() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception: (runtime error)" << e.what() << endl;
    }
    catch (...)
    {
        cout << "Exception: Unknown error " << endl;
    }
    return 0;
}