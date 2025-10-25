#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    char buffer[100];

    strftime(buffer, sizeof(buffer), "Today is %d %m %y,Time=%I:%M:%S", lt);
    cout << buffer << endl;
    return 0;
}