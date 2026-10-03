#include <iostream>
#include <vector>
using namespace std;
// Fractional knapsack problem
double FractionalKnapsack(vector<vector<int>> arr, int w)
{
    // sorting in decreasing order or weight
    sort(arr.begin(), arr.end(), [](vector<int> &a, vector<int> &b) {
        return a[0] / a[1] >= b[0] / b[1];
    });
    double sum = 0;
    for (auto &a : arr)
    {
        if (a[1] <= w)
        {
            sum += a[0];
            w -= a[1];
        }
        else
        {
            sum += (a[0] / a[1]) * w;
            break;
        }
    }
    return sum;
}
int main()
{
    // value
    vector<vector<int>> arr = {{100, 20}, {60, 10}, {100, 50}, {200, 50}};
    // total weight
    int w = 90;
    // ans
    cout << "Max Value: " << FractionalKnapsack(arr, w) << endl;
    return 0;
}