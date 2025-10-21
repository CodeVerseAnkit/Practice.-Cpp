#include <iostream>

using namespace std;
int sum(int m[][3], int n)
{
    int dsum = 0;
    for (int i = 0; i < n; i++)
    {
        dsum += m[i][i];
        if (i != n - i - 1)
            dsum += m[i][n - i - 1];
    }
    return dsum;
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    cout << "diagonal sum: " << sum(matrix, n) << endl;
    return 0;
}