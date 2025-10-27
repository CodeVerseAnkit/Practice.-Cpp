#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "C++ is awesome";
    istringstream iss(line);
    string word;
    int count = 0;

    while (iss >> word)
    {
        count++;
    }
    cout << " Number of word in this string: " << count << endl;

    return 0;
}