#include <iostream>
#include <random>

using namespace std;
int main()
{ // mt19937
    random_device rd;
    mt19937 gen1(rd());

    uniform_int_distribution<int> dis1(1, 10);
    cout << "mt19937 engine: ";
    for (int i = 0; i < 5; i++)
        cout << dis1(gen1) << " ";

    // default random engine
    default_random_engine gen2(rd());

    uniform_int_distribution<int> dis2(1, 10);
    cout << "\ndefault random engine: ";
    for (int i = 0; i < 5; i++)
        cout << dis2(gen2) << " ";

    return 0;
}