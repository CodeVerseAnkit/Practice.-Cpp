#include <iostream>
#include <vector>
using namespace std;
// check if arry is sorted or not using recursion
bool issorted(vector<int> arr, int n)
{ // base condition
    if (n == 0 || n == 1)
        return true;
    // check+ call
    return arr[n - 1] >= arr[n - 2] && issorted(arr, n - 1);
}
int main()
{
    vector<int> arr = {1, 2, 5, 4, 5, 6};
    int n = 6;
    cout << "Array is sorted: " << issorted(arr, n) << endl;
    return 0;
}