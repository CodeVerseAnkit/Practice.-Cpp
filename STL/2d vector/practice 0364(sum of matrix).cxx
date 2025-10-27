#include <iostream>
#include <vector>
using namespace std;
int sum_of_matrix(vector<vector<int>> &mat, int r, int c)
{ // sum of matrix
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += mat[i][j];
        }
    }
    return sum;
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
    cout << "Sum of Matrix: " << sum_of_matrix(matrix, row, col) << endl;
    return 0;
}