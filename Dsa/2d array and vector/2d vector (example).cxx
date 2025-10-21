#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 3 rows, 4 columns (all initialized with 0)
    vector<vector<int>> vec(3, vector<int>(4, 0));

    // Assign
    vec[1][2] = 7;

    // Traversal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    // Add a new row dynamically
    vec.push_back({13, 14, 15, 16});

    cout << "After push_back:" << endl;
    for (auto row : vec)
    {
        for (auto col : row)
            cout << col << " ";
        cout << endl;
    }
}