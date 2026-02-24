#include <iostream>
using namespace std;
// find two unique number using bit manipulation (every element appear two times except two element)
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
pair<int, int> uniqueVal(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
            newxor ^= arr[i];
    }
    return {newxor, tempxor ^ newxor};
}
int main()
{
    int arr[8] = {1, 1, 2, 3, 2, 4, 6, 6};
    pair<int, int> ans = uniqueVal(arr, 8);
    cout << "Unique element: " << ans.first << ", " << ans.second << endl;
    return 0;
}