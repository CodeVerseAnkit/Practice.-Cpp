#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "RollNo=101 Name=Ankit CGPA=8.7";
    stringstream ss(line);
    string token;

    while (ss >> token)
    {
        cout << token << endl;
    }
    return 0;
}