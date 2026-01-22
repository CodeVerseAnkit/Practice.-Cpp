#include <iostream>
#include <sstream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
// ---> typewriter1
void typewriter1(string text, int speed)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(speed * 1ms);
    }
    cout << endl;
}
// ---> typewriter2
void typewriter2(string text, int speed)
{
    stringstream ss(text);
    string word;
    while (ss >> word)
    {
        cout << word << " " << flush;
        this_thread::sleep_for(speed * 1ms);
    }
    cout << endl;
}
// ---> center the text
void center_align(int text_size, int width = 46)
{
    int pad = (width - text_size) / 2;
    if (pad > 0)
        cout << string(pad, ' ');
}
int main()
{
    vector<string> lyrics = {"DHAPPAAA", "YE GOAT KYA HAI", "meri pakar dekh", "KALSE bakchodi NAHI KARI", "meri STRUGGLE dekh", "LAST TIME MAIN ROYA", "hassi ke aansuu the", "sad gaane gaauungaa", "BENCHO MERI SHAKAL DEKH"};
    center_align(lyrics[0].size());
    typewriter1("\033[33;1m" + lyrics[0] + "\033[0m", 50);

    center_align(14);
    typewriter1("🤣 🤣 🤣 🤣 🤣", 50);
    center_align(lyrics[1].size());
    typewriter1("\033[36m" + lyrics[1] + "\033[0m", 50);

    center_align(14);
    cout << "🐐 🐐 🐐 🐐 🐐" << endl;
    center_align(lyrics[2].size());
    typewriter1("\033[32;4;1m" + lyrics[2] + "\033[0m", 50);
    center_align(lyrics[3].size());
    typewriter2(lyrics[3], 300);
    center_align(lyrics[4].size());
    typewriter1("\033[42;33;1m" + lyrics[4] + "\033[0m", 30);

    center_align(lyrics[5].size());
    typewriter1("\033[36;1m" + lyrics[5] + "\033[0m", 50);
    center_align(14);
    cout << "😭 😭 😭 😭 😭" << endl;
    center_align(lyrics[6].size());
    typewriter1("\033[33m" + lyrics[6] + "\033[0m", 20);
    center_align(14);
    cout << "😅 😅 😅 😅 😅" << endl;
    center_align(lyrics[7].size());
    typewriter1("\033[33;1m" + lyrics[7] + "\033[0m", 50);
    center_align(14);
    cout << "🎤 🎤 🎤 🎤 🎤" << endl;
    center_align(lyrics[8].size());
    typewriter2(lyrics[8], 200);
    cout << "\n\n";

    center_align(lyrics[1].size());
    typewriter1("\033[36m" + lyrics[1] + "\033[0m", 50);

    center_align(14);
    cout << "🐐 🐐 🐐 🐐 🐐" << endl;
    center_align(lyrics[2].size());
    typewriter1("\033[32;4;1m" + lyrics[2] + "\033[0m", 50);
    center_align(lyrics[3].size());
    typewriter2(lyrics[3], 300);
    center_align(lyrics[4].size());
    typewriter1("\033[42;33;1m" + lyrics[4] + "\033[0m", 30);

    center_align(lyrics[5].size());
    typewriter1("\033[36;1m" + lyrics[5] + "\033[0m", 50);
    center_align(14);
    cout << "😭 😭 😭 😭 😭" << endl;
    center_align(lyrics[6].size());
    typewriter1("\033[33m" + lyrics[6] + "\033[0m", 30);
    center_align(14);
    cout << "😅 😅 😅 😅 😅" << endl;
    center_align(lyrics[7].size());
    typewriter1("\033[33;1m" + lyrics[7] + "\033[0m", 50);
    center_align(14);
    cout << "🎤 🎤 🎤 🎤 🎤" << endl;
    center_align(lyrics[8].size());
    typewriter2(lyrics[8], 200);
    cout << "\n\n";

    return 0;
}