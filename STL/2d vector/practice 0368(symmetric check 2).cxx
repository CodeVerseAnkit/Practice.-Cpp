#include <iostream>
#include <vector>
using namespace std;

// symmetric check
bool is_matrix_symmetric(vector<vector<int>> &mat, int r, int c)
{
    if (r != c)
        return false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
                return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 8, 9}};
    int row = 3, col = 3;

    cout << "is matrix is symmetric: " << boolalpha << is_matrix_symmetric(matrix, row, col) << endl;
    return 0;
}