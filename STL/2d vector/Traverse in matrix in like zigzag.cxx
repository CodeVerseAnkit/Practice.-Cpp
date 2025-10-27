#include <iostream>
#include <vector>
using namespace std;
void print_matrix(vector<vector<int>> &mat, int n)
{
    for (int d = 0; d < 2 * n - 1; d++)
    {
        int strow = max(0, d - (n - 1));
        int endrow = min(d, n - 1);
        if (d % 2 == 0)
        {
            for (int i = endrow; i >= strow; i--)
            {
                int j = d - i;
                cout << mat[i][j] << " ";
            }
        }
        else
        {
            for (int i = strow; i <= endrow; i++)
            {
                int j = d - i;
                cout << mat[i][j] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "wave matrix: " << endl;
    print_matrix(matrix, 3);
    return 0;
}