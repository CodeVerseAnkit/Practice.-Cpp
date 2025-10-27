#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose_of_matrix(vector<vector<int>> &mat, int r, int c)
{ // transpose of matrix
    vector<vector<int>> transpose(c, vector<int>(r));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    return transpose;
}
// symmetric check
bool is_matrix_symmetric(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> transpose = transpose_of_matrix(mat, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (transpose[i][j] != mat[i][j])
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
        {3, 6, 9}};
    int row = 3, col = 3;
    // original matrix
    cout << "Original matrix: " << endl;
    for (auto row : matrix)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "Transpose of matrix: " << endl;
    vector<vector<int>> ans = transpose_of_matrix(matrix, row, col);
    for (auto r : ans)
    {
        for (auto c : r)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << "is matrix is symmetric: " << boolalpha << is_matrix_symmetric(matrix, row, col) << endl;
    return 0;
}