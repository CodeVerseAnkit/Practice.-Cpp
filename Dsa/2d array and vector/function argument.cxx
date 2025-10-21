#include <iostream>

using namespace std;
pair<int, int> search(int m[][3], int r, int c, int t)
{
    // linear search in 2d array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == t)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4, col = 3;

    int target = 5;
    pair<int, int> cell = search(matrix, row, col, target);
    cout << "cell: [" << cell.first << "," << cell.second << "]" << endl;

    return 0;
}