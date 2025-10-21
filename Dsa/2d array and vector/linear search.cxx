#include <iostream>

using namespace std;

int main()
{
    int matrix[4][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4, col = 3;

    int target = 5;
    bool found = false;
    // linear search in 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "element found at cell: [" << i << "," << j << "]";
                found = true;
                break;
            }
        }
    }
    if (!found)
        cout << "Element not found" << endl;
    return 0;
}