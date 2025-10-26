#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_real_distribution<float> dis(0.0, 1.0);
    cout << "10 Random floating numbers: ";
    for (int i = 0; i < 10; i++)
        cout << fixed << setprecision(2) << dis(gen) << " ";
    return 0;
}