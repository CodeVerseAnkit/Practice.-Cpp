#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto hour = duration_cast<hours>(90min);
    cout << "90m = " << hour.count() << "h" << endl;
    return 0;
}