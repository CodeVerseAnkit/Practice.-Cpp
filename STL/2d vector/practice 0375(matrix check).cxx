#include <iostream>
#include <vector>
using namespace std;
bool check_matrix(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    if (mat1.size() != mat2.size() || mat1[0].size() != mat2[0].size())
        return false;
    for (int i = 0; i < mat1.size(); i++)
    {
        for (int j = 0; j < mat1[i].size(); j++)
        {
            if (mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };
    vector<vector<int>> matrix2 = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}

    };
    cout << boolalpha << check_matrix(matrix1, matrix2) << endl;
    return 0;
}