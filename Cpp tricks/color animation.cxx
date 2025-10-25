#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    string colors[] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m"};
    string text = "Colorful Text Animation!";

    for (int i = 0; i < 20; i++)
    {
        cout << "\r" << colors[i % 6] << text << "\033[0m" << flush;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    cout << endl;
    return 0;
}