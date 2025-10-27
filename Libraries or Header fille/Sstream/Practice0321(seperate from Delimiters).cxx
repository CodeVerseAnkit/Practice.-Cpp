#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "100,200,300,400";
    istringstream iss(line);
    string word;
    // seperate content from Delimiters
    while (getline(iss, word, ','))
    {
        cout << word << endl;
    }

    return 0;
}