#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    //  Arithmetic operation between units
    milliseconds ms(500);
    seconds s(10);
    auto diff = s - ms;
    cout << "diff: " << diff.count() << endl;
    return 0;
}