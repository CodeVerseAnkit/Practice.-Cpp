#include <iostream>
#include <vector>
using namespace std;
// print function
void print(vector<int> v)
{
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
void nextpermutation(vector<int> &v)
{
    // step 1: find the pivot
    int pivot = -1,  n = v.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    // step 2: find greater than pivot element
    for (int i = n - 1; i > pivot; i--)
    {
        if (v[i] > v[pivot])
        {
            swap(v[i], v[pivot]);
            break;
        }
    }
    // step 3: reverse (pivot+1 to n-1) element
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(v[i++], v[j--]);
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 5, 4};
    cout << " Vector: ";
    print(v);
    nextpermutation(v);
    cout << " Next permutation: ";
    print(v);
    return 0;
}