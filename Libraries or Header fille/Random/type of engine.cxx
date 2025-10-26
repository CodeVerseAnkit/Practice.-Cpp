#include <iostream>
#include <random>
using namespace std;

int main()
{
    // Random device for seeding
    random_device rd;

    // Engines
    mt19937 gen1(rd());    // Mersenne Twister 32-bit
    mt19937_64 gen2(rd()); // Mersenne Twister 64-bit
    default_random_engine gen3(rd());
    minstd_rand gen4(rd()); // linear congruential engine

    // Distribution: integers 1 to 10
    uniform_int_distribution<int> dist(1, 10);

    cout << "mt19937:       ";
    for (int i = 0; i < 5; i++)
        cout << dist(gen1) << " ";
    cout << endl;

    cout << "mt19937_64:    ";
    for (int i = 0; i < 5; i++)
        cout << dist(gen2) << " ";
    cout << endl;

    cout << "default_engine:";
    for (int i = 0; i < 5; i++)
        cout << dist(gen3) << " ";
    cout << endl;

    cout << "minstd_rand:   ";
    for (int i = 0; i < 5; i++)
        cout << dist(gen4) << " ";
    cout << endl;
}