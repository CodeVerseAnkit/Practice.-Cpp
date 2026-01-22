#include <iostream>
#include <vector>
using namespace std;
// n queen problem :- place the n queen in a board such that they can't cut each other
bool issafe(vector<string> &board, int row, int col, int n)
{
    // horizontal check
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }
    // vertical check
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    // left digonal check
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    // right digonal check
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}

void nqueen(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    // base condition
    if (row == n)
    {
        ans.push_back({board});
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (issafe(board, row, j, n))
        {
            board[row][j] = 'Q'; // place queen
            nqueen(board, row + 1, n, ans);
            board[row][j] = '.'; //backtracking
        }
    }
}
int main()
{
    int n = 4;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nqueen(board, 0, n, ans);
    
    for (auto r : ans)
    {
        for (auto c : r)
            cout << c << endl;
        cout << endl
             << endl;
    }
    return 0;
}