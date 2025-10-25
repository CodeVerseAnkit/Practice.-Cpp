#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
int main()
{
    cout << "Race start in 5 seconds 🙌" << endl;
    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
        this_thread::sleep_for(1s);
    }
    cout << "GO! 🥳" << endl;
    return 0;
}