#include <iostream>
#include <random>

using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dis(1, 100);
    cout << "10 Random numbers: ";
    for (int i = 0; i < 10; i++)
        cout << dis(gen) << " ";
    return 0;
}