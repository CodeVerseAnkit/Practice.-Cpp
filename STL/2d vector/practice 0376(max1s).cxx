#include <iostream>
#include <vector>
using namespace std;
int rows_with_max1s(vector<vector<int>> &mat)
{
    int max_row = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        int count1s = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
                count1s++;
        }
        if (count1s > mat[i].size() / 2)
            max_row++;
    }
    return max_row;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 0}, {0, 1, 0}, {1, 0, 1}, {0, 1, 1}

    };
    cout << "No.of rows with maximum 1s: " << rows_with_max1s(matrix) << endl;
    return 0;
}