#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Before exception\n";
        throw string("ankit");
        cout << "After exception\n"; // never runs
    }
    catch (int e)
    {
        cout << "Caught exception: " << e << endl;
    }
    catch (float e)
    {
        cout << "Caught exception: " << e << endl;
    }
    catch (string e)
    {
        cout << "Caught exception: " << e << endl;
    }
    catch (...)
    {
        cout << "Caught exception: " << endl;
    }
    cout << "Program continues normally\n";
}