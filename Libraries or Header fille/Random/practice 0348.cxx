#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    mt19937 gen(time(0));

    uniform_int_distribution<int> dis(1, 100);
    cout << "10 Random numbers: ";
    for (int i = 0; i < 10; i++)
        cout << dis(gen) << " ";
    return 0;
}