#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> add_matrix(vector<vector<int>> mat1, vector<vector<int>> mat2, int n)
{
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix2 = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;
    vector<vector<int>> ans = add_matrix(matrix1, matrix2, size);
    cout << "sum of two matrix: " << endl;
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}