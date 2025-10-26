#include <iostream>

#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    cout << "10 Random numbers: ";

    for (int i = 0; i < 10; i++)
        cout << rand() % 100 + 1 << " ";
    return 0;
}