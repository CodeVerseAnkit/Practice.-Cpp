#include <iostream>
#include <vector>
using namespace std;
// sudoku silver using backtracking
bool issafe(vector<vector<char>> &board, int row, int col, char dig)
{
    // horizontal check
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
            return false;
    }
    // vertical check
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
            return false;
    }
    // cell check
    int srow = (row / 3) * 3;
    int scol = (col / 3) * 3;
    for (int i = srow; i <= srow + 2; i++)
    {
        for (int j = scol; j <= scol + 2; j++)
        {
            if (board[i][j] == dig)
                return false;
        }
    }
    return true;
}

bool solve_sudoku(vector<vector<char>> &board, int row, int col)
{
    // base case
    if (row == 9)
        return true;
    // nextrow, nextcol check and update
    int nextrow = row, nextcol = col + 1;
    if (nextcol == 9)
    {
        nextrow = row + 1;
        nextcol = 0;
    }
    // next valid check
    if (board[row][col] != '.')
        return solve_sudoku(board, nextrow, nextcol);
    // cell filling
    for (char dig = '1'; dig <= '9'; dig++)
    {
        // check if cell is safe or not
        if (issafe(board, row, col, dig))
        {
            board[row][col] = dig; // fill
            // call itself
            if (solve_sudoku(board, nextrow, nextcol))
                return true;
            //  backtracking
            board[row][col] = '.';
        }
    }
    return false;
}
int main()
{
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    // print original sudoku
    cout << "Unsolved Sudoku: " << endl;
    for (auto r : board)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    // call solve sudoku function
    solve_sudoku(board, 0, 0);
    // print solved sudoku
    cout << "Solved Sudoku: " << endl;
    for (auto r : board)
    {
        for (auto c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}