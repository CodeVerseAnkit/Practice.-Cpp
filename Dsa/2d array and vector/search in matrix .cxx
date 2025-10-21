#include <iostream>
#include <vector>
using namespace std;
// search in row
bool searchrow(vector<vector<int>> mat, int t, int row)
{
    int n = mat[0].size(); // size of row
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (t == mat[row][mid])
        {
            return true;
        }
        else if (t > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool searchmatrix(vector<vector<int>> mat, int t)
{
    int m = mat.size(), n = mat[0].size();
    int strow = 0, endrow = m - 1;
    while (strow <= endrow)
    {
        int midrow = strow + (endrow - strow) / 2;
        if (t >= mat[midrow][0] && t <= mat[midrow][n - 1])
        {
            return searchrow(mat, t, midrow);
        }
        else if (t >= mat[midrow][n - 1])
        {
            strow = midrow + 1;
        }
        else
        {
            endrow = midrow - 1;
        }
    }
    // return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 30;
    if (searchmatrix(matrix, target))
    {
        cout << "Target founded" << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
    return 0;
}