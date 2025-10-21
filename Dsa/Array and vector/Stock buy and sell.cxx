#include <iostream>
#include <vector>
using namespace std;
int mp(vector<int> p)
{
    int maxp = 0, bestbuy = p[0];
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i] > bestbuy)
        {
            maxp = max(maxp, p[i] - bestbuy);
        }
        bestbuy = min(bestbuy, p[i]);
    }
    return maxp;
}
int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << mp(price) << endl;
    return 0;
}