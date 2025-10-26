#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime>   // time();
using namespace std;
int main()
{
    srand(time(0)); // starting /seed

    int num = rand() % 100 + 1; // between 1 to 100
    cout << "Random number between 1-100: " << num << endl;

    return 0;
}