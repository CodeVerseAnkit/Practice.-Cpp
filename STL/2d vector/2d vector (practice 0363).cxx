#include <iostream>
#include <vector>
using namespace std;
void print_matrix(vector<vector<int>> &mat, int r, int c)
{ // column wise traverse
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix(4, vector<int>(3));
    int row = 4, col = 3;
    int element;
    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element: ";
            cin >> element;
            matrix[i][j] = element;
        }
    }
    // print matrix
    cout << " Matrix: " << endl;
    print_matrix(matrix, row, col);
    return 0;
}