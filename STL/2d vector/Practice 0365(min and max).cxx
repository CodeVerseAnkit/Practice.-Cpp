#include <iostream>
#include <vector>
using namespace std;
// minimum element
int min_element(vector<vector<int>> &mat, int r, int c)
{
    int minele = INT_MAX;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            minele = min(minele, mat[i][j]);
        }
    }
    return minele;
}
// maximum element
int max_element(vector<vector<int>> &mat, int r, int c)
{
    int maxele = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            maxele = max(maxele, mat[i][j]);
        }
    }
    return maxele;
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
    // print
    cout << " Minimum element: " << min_element(matrix, row, col) << endl;
    cout << " Maximum element: " << max_element(matrix, row, col) << endl;
    return 0;
}