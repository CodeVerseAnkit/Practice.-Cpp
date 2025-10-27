#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "Hello world from C++";
    istringstream iss(line);
    string word;
    cout << " Reading a string word by word: " << endl;

    while (iss >> word)
    {
        cout << word << endl;
    }
    return 0;
}