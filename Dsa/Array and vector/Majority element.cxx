#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector<int> v)
{ // find majority element
    int freq = 0, ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (freq == 0)
        {
            ans = v[i];
        }
        if (ans == v[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    // edge case
    // find freq of majority element
    int count = 0;
    for (int i : v)
    {
        if (ans == i)
        {
            count++;
        }
    }
    // check if majority element's freq
    if (count > v.size() / 2)
    {
        return ans;
    }
    else
    {
        return -1; // no majority element
    }
    return ans; // ans
}
int main()
{
    vector<int> vec = {1, 1, 2, 2, 1, 1};
    cout << "Majority Element: " << majority_element(vec) << endl;
    return 0;
}