#include <iostream>
#include <iomanip>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    // normal distribution
    //(average)
    exponential_distribution<double> dis(0.5);
    for (int i = 0; i < 10; i++)
    {
        cout << fixed << setprecision(2)
             << dis(gen) << endl;
    }
    return 0;
}