#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<vector<int>> sum3(vector<int> &v, int t)
{
    // 3 sum problem (brute force approach)
    int n = v.size();
    vector<vector<int>> ans;
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == t)
                {
                    vector<int> trip = {v[i], v[j], v[k]};
                    sort(trip.begin(), trip.end());
                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> num = {-1, 0, 1, 2, -1, -4};
    int target = 0;
    vector<vector<int>> ans = sum3(num, target);
    cout << "Available combination: " << endl;
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}