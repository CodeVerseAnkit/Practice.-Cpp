#include <iostream>
#include <string>
using namespace std;

void printCenter(string text, int width = 46)
{
    int pad = (width - text.size()) / 2;
    if (pad > 0)
        cout << string(pad, ' ');
    cout << text << endl;
}

int main()
{
    printCenter("Welcome to My Program!");
    printCenter("C++ is Powerful!");
    cout << "\n"
         << string(46, '-');
    return 0;
}
