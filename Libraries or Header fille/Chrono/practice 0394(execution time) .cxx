#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void hello()
{
    cout << "Hello Friend " << endl;
}
int main()
{
    auto time1 = steady_clock::now();
    for (int i = 0; i < 100; i++)
        hello(); // function call
    auto time2 = steady_clock::now();
    auto ex_time = duration_cast<nanoseconds>(time2 - time1);
    cout << " Execution time: " << ex_time.count() / 100.0 << "ns" << endl;

    return 0;
}