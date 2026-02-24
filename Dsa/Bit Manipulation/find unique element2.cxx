#include <iostream>
using namespace std;
// find unique number using bit manipulation (every element appear three times except one)
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int uniqueVal(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
                sum++;
        }
        if ((sum % 3) != 0)
            ans = setBit(ans, i);
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 1, 2, 3, 2, 1};
    cout << "Unique number: " << uniqueVal(arr, 7) << endl;
    return 0;
}