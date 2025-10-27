#include <iostream>
#include <vector>
using namespace std;
// minimum element
pair<int, int> even_odd_count(vector<vector<int>> &mat, int r, int c)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return {even, odd};
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {
                       4,
                       5,
                       6,
                   },
        {7, 8, 9},
        {10, 11, 12}

    };
    int row = 4, col = 3;

    // print
    pair<int, int> ans = even_odd_count(matrix, row, col);
    cout << " No. of even element: " << ans.first << endl
         << " No. of odd element: " << ans.second << endl;
    return 0;
}