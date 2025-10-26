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
    cout << " normal vector: ";
    print(vec);
    random_device rd;
    mt19937 gen(rd());

    shuffle(vec.begin(), vec.end(), gen);
    cout << " Shuffle vector: ";
    print(vec);
    return 0;
}