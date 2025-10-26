#include <iostream>
#include <cstdlib> //rand(),srand()
#include <ctime>   // time()
using namespace std;

int main()
{
    // seed lagana zaruri hai warna same sequence milega
    srand(time(0));

    cout << "🎲 Dice Roll Simulator 🎲\n";

    for (int i = 0; i < 5; i++)
    {
        int dice = rand() % 6 + 1; // 1 se 6 ke beech number
        cout << "Roll " << i + 1 << ": " << dice << endl;
    }

    return 0;
}