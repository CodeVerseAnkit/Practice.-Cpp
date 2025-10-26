#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    int day = lt->tm_mday;
    int month = lt->tm_mon + 1;
    int year = lt->tm_year + 1900;
    string filename = "log_" + to_string(year) + "_" + to_string(month) + "_" + to_string(day) + ".txt";
    ofstream ofs;
    ofs.open("/sdcard/Coding.cpp/LIBRARIES or HEADER FILE/ctime/" + filename);
    ofs << "file created successfully: " << day << "/" << month << "/" << year << endl;
    if (ofs.is_open())
    {
        cout << "ffile created successfully" << endl;
    }
    else
    {
        cout << " file not created!! " << endl;
    }
    return 0;
}