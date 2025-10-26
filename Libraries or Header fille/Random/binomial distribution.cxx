#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    // binomial distribution
    // give the probability of success
    binomial_distribution<int> dis(10, 0.5);
    for (int i = 0; i < 10; i++)
    {
        cout << dis(gen) << endl;
    }
    return 0;
}