#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

int main()
{
    vector<int> population = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> s;

    random_device rd;
    mt19937 gen(rd());

    s.reserve(5);
   std::sample(population.begin(), population.end(),
           back_inserter(s), 5, gen);

    cout << "Random sample: ";
    for (int x : s)
        cout << x << " ";
}