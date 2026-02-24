#include <iostream>
using namespace std;
/// bit manipulation
// get bit
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
// set bit
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
// clear bit
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
// update bit
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
// toggle bit
int toggleBit(int n, int pos)
{
    return (n ^ (1 << pos));
}

// multiple by 2
int multiply2(int n)
{
    return (n << 1); // left sift
}
// divide by 2
int divide2(int n)
{
    return (n >> 1); // right sift
}
// count set bit
int countBit(int n)
{
    // for int
    int count = __builtin_popcount(n);

    return count;
}
int main()
{
    cout << "Get bit: " << getBit(4, 2) << endl;
    cout << "Set bit: " << setBit(4, 2) << endl;
    cout << "Clear bit: " << clearBit(4, 2) << endl;
    cout << "Update bit: " << updateBit(2, 2, 2) << endl;
    cout << "Toggle bit: " << toggleBit(4, 1) << endl;
    cout << "Multiply by 2: " << multiply2(4) << endl;
    cout << "Divide by 2: " << divide2(4) << endl;
    cout << "Count bit: " << countBit(4) << endl;
    return 0;
}