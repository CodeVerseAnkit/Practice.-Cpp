#include <iostream>
#include <vector>
#include <set>
using namespace std;
// combination sum problem using recursion
// recursion function
set<vector<int>> seen;
void getallcomb(vector<int> &cand, int i, int tar, vector<vector<int>> &ans, vector<int> &comb)
{
    if (i == cand.size() || tar < 0)
        return;
    if (tar == 0)
    {
        if (seen.find(comb) == seen.end())
        {
            ans.push_back(comb);
            seen.insert(comb);
        }
        return;
    }

    // one select
    comb.push_back(cand[i]);
    getallcomb(cand, i + 1, tar - cand[i], ans, comb);
    // multiple selection
    getallcomb(cand, i, tar - cand[i], ans, comb);
    // backtracking
    comb.pop_back();
    // no selection
    getallcomb(cand, i + 1, tar, ans, comb);
}

// find combination function
vector<vector<int>> combination(vector<int> &candidates, int target)
{
    vector<int> comb;
    vector<vector<int>> ans;
    getallcomb(candidates, 0, target, ans, comb);
    return ans;
}

//main function
int main()
{
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans = combination(candidates, target);
    cout << "All Combination: \n";
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}