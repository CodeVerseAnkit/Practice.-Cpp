#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string num = "10 20 30 40";
    stringstream ss(num);
    vector<int> vec;
    int n;
    while (ss >> n)
    {
        vec.push_back(n);
    }
    cout << " Vector: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}