#include <iostream>
#include <vector>
using namespace std;
void getsubset(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allsubset)
{
    if (i == arr.size())
    {
        allsubset.push_back({ans});
        return;
    }

    // include
    ans.push_back(arr[i]);
    getsubset(arr, ans, i + 1, allsubset);
    ans.pop_back(); //backtracking
                    // skipping duplicate value
    int idx = i + 1;
    while (idx < arr.size() && arr[idx] == arr[idx - 1])
        idx++;
        // call itself
    getsubset(arr, ans, idx, allsubset);
}
int main()
{
    vector<int> arr = {1, 2, 2};
    sort(arr.begin(), arr.end());
    vector<vector<int>> allsubset;
    vector<int> ans;
    getsubset(arr, ans, 0, allsubset);
    for (auto r : allsubset)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}