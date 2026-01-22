#include <iostream>
#include <vector>
using namespace std;
// printing all subset using recursion
void printallsubset(vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    { // base case + printing
        for (int val : ans)
            cout << val << " ";
        cout << endl;
        return;
    }
    ans.push_back(arr[i]);
    printallsubset(arr, ans, i + 1);
    ans.pop_back(); // backtracking
    printallsubset(arr, ans, i + 1);
}
int main()
{
    vector<int> array = {1, 2, 3};
    vector<int> ans;
    printallsubset(array, ans, 0);
    return 0;
}