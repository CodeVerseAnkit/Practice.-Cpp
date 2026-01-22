#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 5.0;
    }
    catch (double error)
    {
        cout << "Exception: (double) " << error << endl;
    }
    catch (float error)
    {
        cout << "Exception: (float)" << error << endl;
    }
    catch (...)
    {
        cout << "Exception: Unknown error " << endl;
    }
    return 0;
}