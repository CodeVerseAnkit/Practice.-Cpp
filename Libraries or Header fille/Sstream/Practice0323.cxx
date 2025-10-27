#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string date = "2025-09-03";
    istringstream iss(date);
    string str;
    int num;
    cout << " num: ";
    while (getline(iss, str, '-'))
    {
        num = stoi(str);
        cout << num << " ";
    }

    return 0;
}