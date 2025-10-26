#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
    cout << "wait for 5 seconds..\n";
    time_t t1 = time(nullptr);
    for (int i = 5; i >= 0; i--)
    { // \r clear screen
        cout << "\r" << i;

        cout << " ";
        // flush buffer
        cout.flush();

        // printing delay
        this_thread::sleep_for(chrono::seconds(1));
    }
    time_t t2 = time(nullptr);
    int elapsed_time = difftime(t2, t1);
    cout << "\nElapsed time: " << elapsed_time << endl;
    return 0;
}