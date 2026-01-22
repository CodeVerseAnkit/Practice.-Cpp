#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void loading_animation_2(string text)
{
    int dotCount = 0;

    for (int i = 0; i < 20; i++)
    {                                  // loop count adjust karo
        dotCount = (dotCount + 1) % 4; // 0,1,2,3 → cycle

        cout << "\r" << text;

        // dots print
        for (int j = 0; j < dotCount; j++)
        {
            cout << ".";
        }

        // purane dots erase karne ke liye extra spaces print karo
        cout << "   ";

        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(200)); // speed control
    }

    cout << endl;
}
int main()
{
    loading_animation_2(" Generating random rumber");
    return 0;
}