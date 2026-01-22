// ------> HELPER FUNCTIONS <-------
//         °°°°°°°°°°°°°°°°

// this are the important function

// 1. navigation button
void back_button()
{
    char ch;
    do
    {
        cout << "  Do you want to back(y): ";
        cin >> ch;
    } while (tolower(ch) != 'y');
}

// 2. clear screen
void clear_screen()
{
    cout << "\033[2J\033[H"; // Clear screen + Move cursor to (0,0)
    cout.flush();
}

// 3. print text in the center
void print_center(string text, int width = 45)
{
    int pad = (width - text.size()) / 2;
    if (pad > 0)
        cout << string(pad, ' ');
    cout << text << endl;
}

// 4. loading animation
void loading_animation1(string text)
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

// 5. loading bar

void loading_bar()
{
    const int barWidth = 10; // no. of character in bracket
    cout << "\t\t "
         << "\033[31;1m"
         << "LOADING... "
         << "\033[0m" << endl;
    cout << "\033[36;1m";
    for (int percent = 0; percent <= 100; ++percent)
    {
        int filled = (percent * barWidth) / 100;

        cout << "\r\t\t[";
        for (int i = 0; i < filled; ++i)
            cout << ':';
        for (int i = filled; i < barWidth; ++i)
            cout << ' ';
        cout << "] " << setw(3) << percent << "%"; // percent aligned

        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // speed
    }
    cout << "\033[0m";
    cout << "\n"
         << endl; // newline
}

// 6. print text with animation
void print_text_with_animation(string text, int speed)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
    cout << endl;
}
