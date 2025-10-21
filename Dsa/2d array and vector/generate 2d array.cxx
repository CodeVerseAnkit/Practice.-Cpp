#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> generate_matrix(vector<int> &v, int row, int col)
{
    if (v.size() != row * col)
        return {};
    vector<vector<int>> mat(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = v[i * col + j];
        }
    }
    return mat;
}
int main()
{
    vector<int> original = {1, 2, 3, 4};
    int m = 2, n = 2;
    vector<vector<int>> ans = generate_matrix(original, m, n);
    for (auto row : ans)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}