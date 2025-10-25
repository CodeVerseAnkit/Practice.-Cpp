#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    // chrono literals
    auto time1 = 2s;
    auto time2 = 500ms;
    auto total = time1 + time2;
    cout << "Total time: " << duration_cast<milliseconds>(total).count() << endl;
    return 0;
}