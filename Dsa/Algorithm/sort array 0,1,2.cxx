#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{ // print function
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
// sort array with 0s, 1s and 2s by using Dutch National flag algorithm
void sortarray(vector<int> &v)
{
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        { // for 0s
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if (v[mid] == 1)
        { // for 1s
            mid++;
        }
        else
        { // for 2s
            swap(v[mid], v[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> v = {1, 0, 2, 1, 2, 0, 2, 2, 1, 0};
    cout << "Vector: ";
    print(v);
    cout << " Sorted Vector: ";
    sortarray(v);
    print(v);
    return 0;
}