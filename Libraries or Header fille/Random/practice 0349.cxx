#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    mt19937 gen(time(0));
    uniform_int_distribution<int> dis(1, 100);
    cout << "Seed as time: " << dis(gen) << endl;
    mt19937 gen2(47);
    uniform_int_distribution<int> dis2(1, 100);
    cout << "Seed as 47: " << dis2(gen2) << endl;
    return 0;
}