#include <stdio.h>
#include <conio.h>
int main()
{
    int num1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int num2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", num1[i][j] - num2[i][j]);
        }
        printf("\n");
    }
    return 0;
}