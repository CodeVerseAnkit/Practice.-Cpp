#include <iostream>
#include <cstdlib> // for system()
using namespace std;
// clear screen
int main()
{
    cout << "\n\nhello" << endl;
    // method 1
    cout << "\033[2J\033[H"; // Clear screen + Move cursor to (0,0)
    cout.flush();

    // method 2

    //  system("cls"); // Windows
    // system("clear"); // Linux / macOS
    cout << "  Hello World " << endl;
    return 0;
}