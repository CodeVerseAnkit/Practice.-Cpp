#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
    int h, m, s;
    cout << "To set alarm, Enter alarm time(h:m:s) : ";
    cin >> h >> m >> s;

    while (true)

    {
        time_t t = time(nullptr);
        tm *lt = localtime(&t);
        int currh = lt->tm_hour;
        if (currh > 12)
            currh -= 12;
        int currm = lt->tm_min;
        int currs = lt->tm_sec;
        // \r clear screen
        cout << "\r Current Time: " << currh << ":" << currm << ":" << currs;
        cout << " ";
        // flush buffer
        cout.flush();
        if (currh == h && currm == m && currs == s)
        {
            cout << "\n Wake up ";
            break;
        }
        // printing delay
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}