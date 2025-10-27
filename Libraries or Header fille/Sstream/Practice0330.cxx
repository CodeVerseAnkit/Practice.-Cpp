#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    string line = "C++ stringstream practice";
    stringstream ss(line);
    string token;

    while (ss >> token)
    {
        cout << token << " —> " << token.length() << endl;
    }

    return 0;
}