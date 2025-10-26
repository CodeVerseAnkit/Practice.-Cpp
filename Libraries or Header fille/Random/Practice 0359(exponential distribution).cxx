#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    exponential_distribution<double> dis(1.5);
    cout << "exponential distribution: ";
    for (int i = 0; i < 20; i++)
        cout << fixed << setprecision(2) << dis(gen) << " ";
    return 0;
}