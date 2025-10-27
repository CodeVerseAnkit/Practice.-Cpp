#include <iostream>
#include <vector>
using namespace std;
void print_matrix(vector<vector<int>> &mat)
{
    for (int j = 0; j < mat.size(); j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < mat[j].size(); i++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else
        {
            for (int i = mat[j].size() - 1; i >= 0; i--)
            {
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
    print_matrix(matrix);
    return 0;
}