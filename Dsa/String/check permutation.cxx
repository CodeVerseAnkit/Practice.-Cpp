#include <iostream>
#include <string>
using namespace std;
bool isfreqsame(int freq1[], int freq2[])
{ // freq check
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkpermutation(string s1, string s2)
{
    int freq[26] = {0}; // store freq of s1 string
    // count frequency of s1 elements
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int windsize = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {
        int windidx = 0, idx = i;
        int windfreq[26] = {0};
        // find frequency of elements of s2 using sliding window
        while (windidx < windsize && idx < s2.length())
        {
            windfreq[s2[idx] - 'a']++;
            windidx++;
            idx++;
        }
        if (isfreqsame(freq, windfreq))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    if (checkpermutation(s1, s2))
    {
        cout << " Permutation found" << endl;
    }
    else
    {
        cout << "Permutation not found" << endl;
    }
    return 0;
}