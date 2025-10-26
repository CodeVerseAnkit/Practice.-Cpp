#include <iostream>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    bernoulli_distribution dis(0.5);
    cout << "Coin toss: " << endl;
    for (int i = 0; i < 10; i++)
        cout << (dis(gen) ? "Head" : "Tail") << endl;
    return 0;
}