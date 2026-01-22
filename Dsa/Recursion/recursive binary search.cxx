#include <iostream>
#include <vector>
using namespace std;
// recursive binary search
int bs(vector<int> arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] <= tar)
            return bs(arr, tar, mid + 1, end);
        else
            return bs(arr, tar, st, mid - 1);
    }
    return -1;
}
int main()
{
    vector<int> array = {-1, 0, 2, 3, 5, 8, 9};
    int target = 5;
    cout << bs(array, target, 0, array.size() - 1);
    return 0;
}