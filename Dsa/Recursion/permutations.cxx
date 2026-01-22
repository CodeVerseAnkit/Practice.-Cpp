#include <iostream>
#include <vector>
using namespace std;
// return all permutations using recursion
void getperm(vector<int> &arr, int idx, vector<vector<int>> &ans)
{
    if (idx == arr.size()) // base case
    {
        ans.push_back({arr}); // store ans
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    { // idx place=>ith element choice
        swap(arr[idx], arr[i]);
        // call itself
        getperm(arr, idx + 1, ans);
        // backtracking
        swap(arr[idx], arr[i]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    getperm(arr, 0, ans);
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}