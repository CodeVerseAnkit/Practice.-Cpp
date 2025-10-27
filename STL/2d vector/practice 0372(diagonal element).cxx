#include <iostream>
#include <vector>
using namespace std;
void diagonal_element(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << mat[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };
    cout << "sum of diagonal elements of matrix: " << endl;
    diagonal_element(matrix);
    return 0;
}