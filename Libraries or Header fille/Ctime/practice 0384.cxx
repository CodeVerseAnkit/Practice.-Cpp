#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    char buffer[100];

    strftime(buffer, sizeof(buffer), "%d/%m/%y", lt);
    cout << " Current Date: " << buffer << endl;
    strftime(buffer, sizeof(buffer), "%H:%M:%S", lt);
    cout << " Current Time: " << buffer << endl;
    return 0;
}