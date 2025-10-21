#include <iostream>

using namespace std;
void print(int m[][3], int r, int c)
{
    // linear search in 2d array
    for (int i = 0; i < c; i++)
    { // column wise traverse
        for (int j = 0; j < r; j++)
        {
            cout << m[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4, col = 3;
    print(matrix, row, col);
    return 0;
}