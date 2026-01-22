#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    int incount = 0;
    // compare and store in temp
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
    // remaining left part
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    //remaining right part
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // copy to original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }
    return incount;
}
int mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        int leftcount = mergesort(arr, st, mid);       // left
        int rightcount = mergesort(arr, mid + 1, end); // right
        int incount 
        = merge(arr, st, mid, end);
        //sorting
        return leftcount + rightcount + incount;
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