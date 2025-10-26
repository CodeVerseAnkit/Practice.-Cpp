#include <iostream>
#include <random>
#include <vector>
using namespace std;
void print(vector<int> v)
{
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << " Normal Vector: ";
    print(vec);
    random_device rd;
    mt19937 gen(rd());

    std::shuffle(vec.begin(), vec.end(), gen);
    cout << " Vector After Shuffle: ";
    print(vec);
    return 0;
}