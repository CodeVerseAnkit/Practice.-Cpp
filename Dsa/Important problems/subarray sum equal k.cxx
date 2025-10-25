#include <iostream>
#include <vector>
using namespace std;

int subarrsum(vector<int> &v, int k)
{   // sub array sum equal to k
    // brute force approach
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            sum += v[j];
            if (sum == k)
                count++;
        }
    }
    return count;
}
int main()
{
    vector<int> num = {1, 2, 3};
    int target = 3;
    cout << "no of subarray sum equal to k: " << subarrsum(num, target) << endl;
    return 0;
}