#include <iostream>
using namespace std;
// count the number of set but
int countBit(int n)
{
    int ans = 0;
    while (n)
    {
        n = n & (n - 1);

        ans++;
    }
    return ans;
}
int main()
{
    cout << "Count bit: " << countBit(6) << endl;
    cout << "Count bit: " << countBit(16) << endl;
    return 0;
}