#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
int main()
{
    int sec;
    cout << "Enter alarm time (in seconds) : ";
    cin >> sec;
    auto time = system_clock::now() + seconds(sec);
    this_thread::sleep_until(time);
    for (int i = 0; i < 5; i++)
        cout << " Wake up 🥳" << endl;
    return 0;
}