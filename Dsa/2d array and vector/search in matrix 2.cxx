#include <iostream>
#include <vector>
using namespace std;
bool searchmatrix(vector<vector<int>> mat, int t)
{
    int m = mat.size(), n = mat[0].size();
    int row = 0, column = n - 1;
    while (row < m && column >= 0)
    {
        if (t == mat[row][column])
        {
            return true;
        }
        else if (t < mat[row][column])
        {
            column--;
        }
        else
        {
            row++;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;
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