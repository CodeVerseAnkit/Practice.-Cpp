#include <iostream>
using namespace std;
int main()
{
    /// Bitwise operators
    // 1. Bitwise & (AND)
    cout << "AND: " << (4 & 8) << endl;
    // 2. Bitwise | (OR)
    cout << "OR: " << (4 | 8) << endl;
    // 3. Bitwise ~ (NOT)
    cout << "NOT: " << (~2) << endl;
    // 4. Bitwise ^ (XOR)
    cout << "XOR: " << (4 ^ 8) << endl;

    // 5. Bitwise << (left shift)
    cout << "Left shift: " << (4 << 1) << endl;
    // 6. Bitwise >> (right shift)
    cout << "Right shift: " << (4 >> 1) << endl;
    return 0;
}