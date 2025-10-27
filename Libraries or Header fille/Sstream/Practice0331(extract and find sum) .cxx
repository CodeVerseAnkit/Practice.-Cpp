#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    string line = "Hello123World456";
    // replace chat with space
    for (int i = 0; i < line.length(); i++)
    {
        if (!isdigit(line[i]))
        {
            line[i] = ' ';
        }
    }

    // find sum
    stringstream ss(line);
    int sum = 0;
    string token;
    while (ss >> token)
    {
        sum += stoi(token);
    }
    cout << " Sum: " << sum << endl;
    return 0;
}