#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // time in sec.
    time_t t = time(nullptr);
    // use of ctime()
    cout << "ctime(): " << ctime(&t); // use of asctime()
    tm *lt = localtime(&t);
    cout << "asctime(): " << asctime(lt);
    return 0;
}