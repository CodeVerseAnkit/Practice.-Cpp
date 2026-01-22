#include <iostream>
using namespace std;
int main()
{
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(3, 4); // 7
    return 0;
}