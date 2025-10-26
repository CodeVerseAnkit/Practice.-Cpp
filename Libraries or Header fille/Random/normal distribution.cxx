#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    // normal distribution
    //(average)
    normal_distribution<double> dis(50.0, 5.0);
    for (int i = 0; i < 10; i++)
    {
        cout << dis(gen) << endl;
    }
    return 0;
}