#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr, int st, int mid, int end)
{
    int i = st, j = mid + 1;
    int incount = 0;
    vector<int> temp;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            incount += (mid - i + 1);
        }
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= end)
        temp.push_back(arr[j++]);
    for (int idx = 0; idx < temp.size(); idx++)
        arr[idx + st] = temp[idx];

    return incount;
}
int mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        int lcount = mergesort(arr, st, mid);
        int rcount = mergesort(arr, mid + 1, end);
        int incount = merge(arr, st, mid, end);
        return lcount + rcount + incount;
    }
    return 0;
}
int main()
{
    vector<int> arr = {6, 3, 5, 2, 7};
    int ans = mergesort(arr, 0, arr.size() - 1);
    cout << "Inversion count: " << ans << endl;
    return 0;
}