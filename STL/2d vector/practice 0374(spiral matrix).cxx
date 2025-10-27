#include <iostream>
#include <vector>
using namespace std;
void spiral_matrix(vector<vector<int>> mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            cout << mat[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            cout << mat[i][srow] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };
    cout << " Spiral matrix: " << endl;
    spiral_matrix(matrix);
    return 0;
}