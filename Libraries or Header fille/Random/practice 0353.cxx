#include <iostream>
#include <random>

using namespace std;
int dice()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dis(1, 6);

    return dis(gen);
}
int main()
{
    cout << "Rolling dice 🎲: ";
    for (int i = 0; i < 10; i++)
        cout << dice() << " ";

    return 0;
}