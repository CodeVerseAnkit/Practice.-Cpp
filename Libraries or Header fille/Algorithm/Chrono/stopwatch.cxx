#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

int main()
{
    cout << "Press ENTER to start...";
    cin.get();

    auto start = steady_clock::now();
    cout << "Running... press ENTER to stop\n";
    cin.get();

    auto end = steady_clock::now();
    auto elapsed = duration_cast<seconds>(end - start);

    cout << "Elapsed time: " << elapsed.count() << " seconds\n";
}