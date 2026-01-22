#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    try
    {
        cout << "num: " << num.at(7) << endl;
    }
    catch (const out_of_range &e)
    {
        cout << " Exception: " << e.what() << endl;
    }
    return 0;
}