#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
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
}
void mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergesort(arr, st, mid);      // left
        mergesort(arr, mid + 1, end); // right
        merge(arr, st, mid, end);     //sorting
    }
}
int main()
{
    vector<int> arr = {12, 34, 35, 17, 6, 12, 31};
    mergesort(arr, 0, arr.size() - 1);
    cout << "Sorted array: " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}