#include <iostream>
using namespace std;
int main()
{
#define DEBUG

#ifdef DEBUG
    cout << "Debug mode ON\n";
#endif
// __-----------___
#ifndef DEBUG
    cout << "Release mode\n";
#endif

    // __-----------___

#define LEVEL 2

#if LEVEL == 1
    cout << "Low" << endl;
#elif LEVEL == 2
    cout << "Medium" << endl;
#else
    cout << "High" << endl;
#endif

    // __-----------___

#ifdef _WIN32
    cout << "Windows code" << endl;
#elif __linux__
    cout << "Linux code" << endl;
#else
    cout << "Unknown OS" << endl;
#endif

    return 0;
}