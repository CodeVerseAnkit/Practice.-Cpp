#include <iostream>
#include <vector>
using namespace std;
// minimum element
bool search_in_matrix(vector<vector<int>> &mat, int r, int c, int t)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == t)
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {
                       4,
                       5,
                       6,
                   },
        {7, 8, 9},
        {10, 11, 12}

    };
    int row = 4, col = 3;
    int target = 55;
    // print
    if (search_in_matrix(matrix, row, col, target))
        cout << "Element founded" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}