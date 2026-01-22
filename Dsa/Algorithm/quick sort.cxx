#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int st, int end)
{ // partition function
    int idx = st - 1, piv = arr[end];
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= piv)
        {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quicksort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        // pivot index
        int pividx = partition(arr, st, end);
        // left half
        quicksort(arr, st, pividx - 1);
        // right half
        quicksort(arr, pividx + 1, end);
    }
}

int main()
{
    vector<int> arr = {12, 34, 35, 17, 6, 12, 31};
    quicksort(arr, 0, arr.size() - 1);
    cout << "Sorted array: " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    return 0;
}