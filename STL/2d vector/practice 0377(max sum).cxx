#include <iostream>
#include <vector>
using namespace std;
int max_row_sum(vector<vector<int>> &mat)
{
    int maxsum = INT_MIN;

    for (int i = 0; i < mat.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            sum += mat[i][j];
        }
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 2}, {3, 1, 11}, {14, 7, 15}, {5, 11, 12}

    };
    cout << "Row with maximum sum: " << max_row_sum(matrix) << endl;
    return 0;
}