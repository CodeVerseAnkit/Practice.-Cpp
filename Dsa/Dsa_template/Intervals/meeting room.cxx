#include <iostream>
#include <vector>
using namespace std;
// meeting room (interval problem)
// find the minimum room to adjust all the people.
// one room assign to one people only
int MinRoom(vector<int> &start, vector<int> &end)
{
    int n = start.size();
    int room = 0, ans = 0, i = 0, j = 0;
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    while (i < n && j < n)
    {
        if (start[i] < end[j])
        {
            room++;
            ans = max(ans, room);
            i++;
        }
        else
        {
            room--;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> start = {2, 9, 6};
    vector<int> end = {12, 4, 10};
    cout << "Min Room: " << MinRoom(start, end) << endl;
    return 0;
}