#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    char buffer[100];

    strftime(buffer, sizeof(buffer), "%B", lt);
    cout << " Current Month: " << buffer << endl;
    strftime(buffer, sizeof(buffer), "%A", lt);
    cout << " Current Day: " << buffer << endl;
    return 0;
}