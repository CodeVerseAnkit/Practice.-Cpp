#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "12:30:45";
    stringstream ss(line);
    string token;
    int time;
    cout << " Time: ";
    while (getline(ss, token, ':'))
    {
        time = stoi(token);
        cout << time << " ";
    }
    return 0;
}