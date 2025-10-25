#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;
int main()
{
    auto expected = seconds(2);
    auto start = steady_clock::now();
    cout << "before sleep: " << duration_cast<milliseconds>(start.time_since_epoch()).count() << "ms" << endl;
    sleep_for(expected);
    auto now = steady_clock::now();
    cout << "After sleep: " << duration_cast<milliseconds>(now.time_since_epoch()).count() << "ms" << endl;
    auto actual = duration_cast<milliseconds>(now - start);
    auto drift = actual - duration_cast<milliseconds>(expected);
    cout << "Expected sleep: " << expected.count() * 1000 << "ms" << endl;
    cout << "Actual sleep: " << actual.count() << "ms" << endl;
    cout << "Drift: " << drift.count() << "ms" << endl;
    return 0;
}