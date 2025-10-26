#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    // bernoulli distribution
    // 0.5 for equal probability
    bernoulli_distribution dis(0.5);
    for (int i = 0; i < 10; i++)
    {
        cout << boolalpha << dis(gen) << endl;
    }
    return 0;
}