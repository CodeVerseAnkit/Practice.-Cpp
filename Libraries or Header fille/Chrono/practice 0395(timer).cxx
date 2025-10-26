#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
int main()
{
    cout << "Bomb blast in 10 seconds ❗❗" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Tick!... " << endl;
        this_thread::sleep_for(1s);
    }
    cout << " Boom 💥" << endl;
    return 0;
}