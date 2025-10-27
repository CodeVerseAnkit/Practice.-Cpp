#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "42";
    istringstream iss(line);
    int num;
    iss >> num;
    cout << " Square of " << num << " : " << sqrt(num) << endl;

    return 0;
}