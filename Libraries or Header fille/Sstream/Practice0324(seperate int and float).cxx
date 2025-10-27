#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string line = "12 3.5 7 2.5";
    istringstream iss(line);
    vector<int> integer;
    vector<float> floats;
    string token;
    // seperating floats and integer value
    while (iss >> token)
    {
        if (token.find('.') != string::npos)
        {
            floats.push_back(stof(token));
        }
        else
        {
            integer.push_back(stoi(token));
        }
    }
    // print value
    cout << "Integer value: ";
    for (int i : integer)
        cout << i << " ";
    cout << "\nFloat value: ";
    for (float i : floats)
        cout << i << " ";

    return 0;
}