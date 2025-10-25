#include <iostream>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// selection sort algorithm
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallidx])
            {
                smallidx = j;
            }
        }
        swap(a[i], a[smallidx]);
    }
}
int main()
{
    int arr[8] = {3, 5, 2, 4, 5, 7, 8, 6};
    int n = 8;
    cout << "Array: ";
    print(arr, n);
    selectionsort(arr, n);
    cout << " Sorted Array: ";
    print(arr, n);
    return 0;
}