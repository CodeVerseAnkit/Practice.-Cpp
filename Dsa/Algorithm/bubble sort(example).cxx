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
// bubble sort algorithm
void bubblesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            return;
        }
    }
}
int main()
{
    int arr[8] = {3, 5, 2, 4, 5, 7, 8, 6};
    int n = 8;
    cout << "Array: ";
    print(arr, n);
    bubblesort(arr, n);
    cout << " Sorted Array: ";
    print(arr, n);
    return 0;
}