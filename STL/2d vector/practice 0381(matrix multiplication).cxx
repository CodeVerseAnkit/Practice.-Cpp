#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> matrix_multiplication(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    int m = mat1.size(), n = mat1[0].size(), p = mat2[0].size();
    if (mat2.size() != n)
    {
        cout << "Invalid matrix row and column " << endl;
        return {};
    }
    vector<vector<int>> ans(m, vector<int>(p, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> matrix2 = {
        {1, 2}, {4, 5}, {1, 2}};

    vector<vector<int>> ans = matrix_multiplication(matrix1, matrix2);
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}