#include <iostream>
#include <chrono>
#include <thread> // for sleep_for

using namespace std;

int main()
{
    string text = "Loading";

    for (int i = 0; i < 10; i++)
    {
        cout << "\r" << text; // overwrite same line
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(300));
        text += "•"; // har bar ek extra dot add karte hai
    }
    cout << endl;
    return 0;
}