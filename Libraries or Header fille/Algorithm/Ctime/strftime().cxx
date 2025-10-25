#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(nullptr);
    tm *lt = localtime(&now);

    char buffer[100];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", lt);
    cout << "Custom format: " << buffer << "\n";

    strftime(buffer, sizeof(buffer), "Today is %A, %d %B %Y", lt);
    cout << buffer << "\n";
    return 0;
}