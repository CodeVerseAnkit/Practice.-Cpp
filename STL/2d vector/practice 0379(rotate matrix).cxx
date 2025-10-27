#include <iostream>
#include <vector>
using namespace std;
// print matrix
void print_matrix(vector<vector<int>> mat)
{
    for (auto r : mat)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
}
// rotate matrix by 90°
void rotate_matrix(vector<vector<int>> &mat, int n)
{
    for (int i = 0; i < n; i++)

    { // swap transpose
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    { // reverse each row
        reverse(mat[i].begin(), mat[i].end());
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "noral matrix: " << endl;
    print_matrix(matrix);
    cout << "Rotated matrix: " << endl;
    rotate_matrix(matrix, 3);
    print_matrix(matrix);
    return 0;
}