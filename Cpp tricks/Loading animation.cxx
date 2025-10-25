#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip> // for setw
using namespace std;
int main()
{
    const int barWidth = 10; // no. of character in bracket
    cout << "\t\t "
         << "\033[31;1m"
         << "LOADING... "
         << "\033[0m" << endl;
    cout << "\033[36;1m";
    for (int percent = 0; percent <= 100; ++percent)
    {
        int filled = (percent * barWidth) / 100;

        cout << "\r\t\t[";
        for (int i = 0; i < filled; ++i)
            cout << ':';
        for (int i = filled; i < barWidth; ++i)
            cout << ' ';
        cout << "] " << setw(3) << percent << "%"; // percent aligned

        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // speed
    }
    cout << "\033[0m";
    cout << "\n"
         << endl; // newline
    return 0;
}