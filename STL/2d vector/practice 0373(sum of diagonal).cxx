#include <iostream>
#include <vector>
using namespace std;
int diagonal_element(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };
    cout << "sum of diagonal elements of matrix: " << diagonal_element(matrix) << endl;
    return 0;
}