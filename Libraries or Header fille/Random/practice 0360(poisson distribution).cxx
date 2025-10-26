#include <iostream>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    poisson_distribution<int> dis1(3);
    cout << "poisson distribution(mean=3): ";
    for (int i = 0; i < 10; i++)
        cout << dis1(gen) << " ";

    poisson_distribution<int> dis2(10);
    cout << "\npoisson distribution(mean=10): ";
    for (int i = 0; i < 10; i++)
        cout << dis2(gen) << " ";
    return 0;
}