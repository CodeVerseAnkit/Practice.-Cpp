#include <iostream>
using namespace std;
//ANSI Escape Code Cheat Sheet for C++ Console

int main()
{
    cout << "\033[0m"; // Reset all formatting

    cout << "===== TEXT COLORS =====\n";
    cout << "\033[30m"
         << "Black"
         << "\033[0m" << endl;
    cout << "\033[31m"
         << "Red"
         << "\033[0m" << endl;
    cout << "\033[32m"
         << "Green"
         << "\033[0m" << endl;
    cout << "\033[33m"
         << "Yellow"
         << "\033[0m" << endl;
    cout << "\033[34m"
         << "Blue"
         << "\033[0m" << endl;
    cout << "\033[35m"
         << "Magenta"
         << "\033[0m" << endl;
    cout << "\033[36m"
         << "Cyan"
         << "\033[0m" << endl;
    cout << "\033[37m"
         << "White"
         << "\033[0m" << endl;

    cout << "\n===== BACKGROUND COLORS =====\n";
    cout << "\033[40m"
         << "Black BG"
         << "\033[0m" << endl;
    cout << "\033[41m"
         << "Red BG"
         << "\033[0m" << endl;
    cout << "\033[42m"
         << "Green BG"
         << "\033[0m" << endl;
    cout << "\033[43m"
         << "Yellow BG"
         << "\033[0m" << endl;
    cout << "\033[44m"
         << "Blue BG"
         << "\033[0m" << endl;
    cout << "\033[45m"
         << "Magenta BG"
         << "\033[0m" << endl;
    cout << "\033[46m"
         << "Cyan BG"
         << "\033[0m" << endl;
    cout << "\033[47m"
         << "White BG"
         << "\033[0m" << endl;

    cout << "\n===== TEXT STYLES =====\n";
    cout << "\033[1m"
         << "Bold Text"
         << "\033[0m" << endl;
    cout << "\033[3m"
         << "Italic Text"
         << "\033[0m" << endl;
    cout << "\033[4m"
         << "Underline Text"
         << "\033[0m" << endl;
    cout << "\033[9m"
         << "Strikethrough Text"
         << "\033[0m" << endl;

    cout << "\n===== COMBINED STYLES =====\n";
    cout << "\033[1;31m"
         << "Bold Red Text"
         << "\033[0m" << endl;
    cout << "\033[3;44m"
         << "Italic Blue Background"
         << "\033[0m" << endl;
    cout << "\033[1;4;32m"
         << "Bold Underlined Green Text"
         << "\033[0m" << endl;

    cout << "\n===== RESET FORMATTING =====\n";
    cout << "\033[0m"
         << "Back to normal text" << endl;

    return 0;
}