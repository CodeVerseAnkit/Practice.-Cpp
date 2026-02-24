#include <iostream>
using namespace std;
// find unique number using bit manipulation
int uniqueVal(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans ^= arr[i];
    return ans;
}
int main()
{
    int arr[7] = {1, 1, 2, 3, 2, 4, 4};
    cout << "Unique number: " << uniqueVal(arr, 7) << endl;
    return 0;
}