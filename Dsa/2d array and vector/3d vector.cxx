#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 2, y = 3, z = 4; // dimensions

    // 3D vector initialization with 0
    vector<vector<vector<int>>> cube(x, vector<vector<int>>(y, vector<int>(z, 0)));

    // Input values
    cout << "Enter elements for a " << x << "x" << y << "x" << z << " cube:\n";
    for (int i = 0; i < x; i++)
    { // layers
        for (int j = 0; j < y; j++)
        { // rows
            for (int k = 0; k < z; k++)
            { // cols
                cin >> cube[i][j][k];
            }
        }
    }

    // Print the cube
    cout << "\nCube elements:\n";
    for (int i = 0; i < x; i++)
    {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}