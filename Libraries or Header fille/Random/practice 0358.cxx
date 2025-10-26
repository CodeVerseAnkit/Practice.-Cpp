#include <iostream>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    poisson_distribution<int> dis(3);
    cout << "poisson distribution: ";
    for (int i = 0; i < 20; i++)
        cout << dis(gen) << " ";
    return 0;
}