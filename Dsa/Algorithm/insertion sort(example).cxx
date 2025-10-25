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
// insertion sort algorithm
void insertionsort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = a[i];
        int prev = i - 1;
        while (prev >= 0 && a[prev] > curr)
        {
            a[prev + 1] = a[prev];
            prev--;
        }
        a[prev + 1] = curr;
    }
}
int main()
{
    int arr[8] = {3, 5, 2, 4, 5, 7, 8, 6};
    int n = 8;
    cout << "Array: ";
    print(arr, n);
    insertionsort(arr, n);
    cout << " Sorted Array: ";
    print(arr, n);
    return 0;
}