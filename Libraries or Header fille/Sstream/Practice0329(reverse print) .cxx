#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string line = "1 2 3 4 5";
    stringstream ss(line);
    string token;
    vector<int> num;
    while (ss >> token)
    {
        num.push_back(stoi(token));
    }
    cout << " Num: ";
    for (int i = num.size() - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
    return 0;
}