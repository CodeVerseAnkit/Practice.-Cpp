#include <iostream>
#include <random>

using namespace std;
long long lottery(int length)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 9);
    long long lottery_number = 0;
    for (int i = 0; i < length; i++)
    {
        lottery_number = lottery_number * 10 + dis(gen);
    }
    return lottery_number;
}

int main()
{
    cout << "Lottery Number: " << lottery(6) << endl;
    return 0;
}