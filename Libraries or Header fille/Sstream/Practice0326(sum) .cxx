#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "5 apples and 10 oranges";
    stringstream ss(line);
    string token;
    int sum = 0;
    while (ss >> token)
    {
        if (token[0] >= '0' && token[0] <= '9')
            sum += stoi(token);
    }
    cout << " Sum: " << sum << endl;
    return 0;
}