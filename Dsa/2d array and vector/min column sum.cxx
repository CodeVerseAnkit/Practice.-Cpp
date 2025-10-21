#include <iostream>

using namespace std;
int findmin(int m[][3], int r, int c)
{
    int minsum = INT_MAX;
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum += m[j][i];
        }
        minsum = min(minsum, sum);
    }
    return minsum;
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4, col = 3;
    cout << "Minimum column sum: " << findmin(matrix, row, col) << endl;
    return 0;
}