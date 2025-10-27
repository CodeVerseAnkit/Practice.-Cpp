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
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};
    int row = 4, col = 3;
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
    // transpose of matrix
    vector<vector<int>> ans = transpose_of_matrix(matrix, row, col);
    cout << "Transpose of matrix: " << endl;
    for (auto row : ans)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}