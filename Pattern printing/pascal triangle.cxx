#include <iostream>
using namespace std;
void pascal(int n)
{ // printing pascal triangle
    for (int i = 1; i <= n; i++)
    {
        int coff = 1;
        for (int s = n - i; s > 0; s--)
            cout << " ";
        for (int j = 1; j <= i; j++)
        {
            cout << coff << " ";
            coff = coff * (i - j) / j; // main formula
        }
        cout << endl;
    }
}
int main()
{
    pascal(5);
    return 0;
}