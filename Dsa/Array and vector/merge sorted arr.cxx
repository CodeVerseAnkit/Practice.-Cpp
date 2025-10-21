#include <iostream>
#include <vector>
using namespace std;
// merge two sorted array
void mergesortarr(vector<int> &a, int m, vector<int> &b, int n)
{
    int index = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[index--] = a[i--];
        }
        else
        {
            a[index--] = b[j--];
        }
    }
    while (j >= 0)
    {
        a[index--] = b[j--];
    }
}
int main()
{
    vector<int> a = {2, 3, 5, 6, 0, 0, 0};
    vector<int> b = {1, 2, 3};
    int m = 4;
    int n = 3;
    mergesortarr(a, m, b, n);
    cout << "Merged sorted array: ";
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}