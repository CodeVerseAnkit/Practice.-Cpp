#include <iostream>
#include <vector>
using namespace std;
// gas station

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int togas = 0, tocost = 0;
    int start = 0, curgas = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        togas += gas[i];
        tocost += cost[i];
        curgas += (gas[i] - cost[i]);
        if (curgas < 0)
        {
            start = i + 1;
            curgas = 0;
        }
    }
    return togas < tocost ? -1 : start;
}
int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    cout << "Ans: " << canCompleteCircuit(gas, cost) << endl;
    return 0;
}