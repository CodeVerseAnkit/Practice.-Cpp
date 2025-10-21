#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    vector<vector<int>> matrix = {{1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}};
    cout << " Vector Matrix: " << endl;
    print(matrix);
    return 0;
}