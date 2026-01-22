#include <iostream>
#include <vector>
using namespace std;
void getallsubset(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allsubset)
{
    if (i == arr.size())
    { // base case + storing ans
        allsubset.push_back({ans});
        return;
    }
    ans.push_back(arr[i]);
    getallsubset(arr, ans, i + 1, allsubset);
    ans.pop_back(); // backtracking
    getallsubset(arr, ans, i + 1, allsubset);
}
int main()
{
    vector<int> array = {1, 2, 3};
    vector<int> ans;
    vector<vector<int>> allsubset;
    getallsubset(array, ans, 0, allsubset);
    for (auto r : allsubset)
    {
        for (auto c : r)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}