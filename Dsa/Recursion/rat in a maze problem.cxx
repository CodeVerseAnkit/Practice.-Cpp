#include <iostream>
#include <vector>
using namespace std;
// rat in a maze problem: find the all path

// recursion+backtracking

void SolveMaze(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans)
{
    int n = maze.size(); // size
    // base case
    if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || maze[row][col] == -1)
        return;
    if (row == n - 1 && col == n - 1)
    { // store path in ans
        ans.push_back({path});
        return;
    }

    maze[row][col] = -1;                            // mark as ture
    SolveMaze(maze, row + 1, col, path + 'D', ans); // down
    SolveMaze(maze, row - 1, col, path + 'U', ans); // up
    SolveMaze(maze, row, col + 1, path + 'R', ans); // right

    SolveMaze(maze, row, col - 1, path + 'L', ans); // Left
    // backtracking
    maze[row][col] = 1; //mark as false
}

vector<string> FindPath(vector<vector<int>> &maze)
{
    vector<string> ans; // all ans
    string path = "";   // path
    // call recursion function
    SolveMaze(maze, 0, 0, path, ans);
    return ans; // return ans
}

// main function
int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = FindPath(maze);
    // print ans
    for (string s : ans)
    {
        cout << s << " ";
    }
    return 0;
}