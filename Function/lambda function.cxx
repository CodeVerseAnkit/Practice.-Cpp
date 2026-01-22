#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // using lambda function

    int count = count_if(v.begin(), v.end(),
                         [](int x) {
                             return x % 2 == 0;
                         });
    cout << count << endl;
    return 0;
}