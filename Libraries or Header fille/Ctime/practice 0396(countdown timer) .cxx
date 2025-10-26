#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    cout << "countdown start 😈:\n";

    for (int i = 10; i >= 0; i--)
    { // \r clear screen
        cout << "\r" << i;

        cout << " ";
        // flush buffer
        cout.flush();

        // printing delay
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "\nBoom💥" << endl;
    return 0;
}