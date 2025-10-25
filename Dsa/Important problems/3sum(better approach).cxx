#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<vector<int>> sum3(vector<int> &v, int t)
{
    // 3 sum problem (be approach)
    int n = v.size();

    set<vector<int>> unique_trip;
    for (int i = 0; i < n; i++)
    {
        int a = -v[i];
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int c = a - v[j];
            if (s.find(c) != s.end())
            {
                vector<int> trip = {v[i], v[j], c};
                sort(trip.begin(), trip.end());
                unique_trip.insert(trip);
            }
            s.insert(v[j]);
        }
    }
    vector<vector<int>> ans(unique_trip.begin(), unique_trip.end());
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