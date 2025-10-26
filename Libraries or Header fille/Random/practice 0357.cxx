#include <iostream>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    binomial_distribution<int> dis(6, 0.6);
    cout << "No.of head appear when a coin toss 10 times: ";
    for (int i = 0; i < 10; i++)
        cout << dis(gen) << " ";
    return 0;
}