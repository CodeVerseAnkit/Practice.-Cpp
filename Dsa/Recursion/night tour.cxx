#include <iostream>
#include <vector>
using namespace std;
//
bool isvalid(vector<vector<int>> &grid, int row, int col, int n,
             int exval)
{
    if (row < 0 || col < 0 || row >= n || col >= n ||
        grid[row][col] != exval)
        return false;
    if (exval == n * n - 1)
        return true;
    int ans1 = isvalid(grid, row - 2, col + 1, n, exval + 1);
    int ans2 = isvalid(grid, row - 1, col + 2, n, exval + 1);
    int ans3 = isvalid(grid, row + 1, col + 2, n, exval + 1);

    int ans4 = isvalid(grid, row + 2, col + 1, n, exval + 1);
    int ans5 = isvalid(grid, row + 2, col - 1, n, exval + 1);
    int ans6 = isvalid(grid, row + 1, col - 2, n, exval + 1);
    int ans7 = isvalid(grid, row - 1, col - 2, n, exval + 1);
    int ans8 = isvalid(grid, row - 2, col - 1, n, exval + 1);
    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}
bool checkValidGrid(vector<vector<int>> &grid)
{
    return isvalid(grid, 0, 0, grid.size(), 0);
}
int main()
{
    vector<vector<int>> grid = {{0, 11, 16, 5, 20}, {17, 4, 19, 10, 15}, {12, 1, 8, 21, 6}, {3, 18, 23, 14, 9}, {24, 13, 2, 7, 22}};
    cout << "is this a valid grid: " << boolalpha << checkValidGrid << endl;
}