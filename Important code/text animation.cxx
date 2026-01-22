#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void typewriter(string text, int speed)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
    cout << endl;
}

int main()
{
    typewriter(" Hello Ankit! Welcome to C++ text\n animation demo.", 50);
    return 0;
}