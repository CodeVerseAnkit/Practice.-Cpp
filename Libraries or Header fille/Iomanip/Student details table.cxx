#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct student
{
    string name;
    int rollno;
    string course;
    double fees;
    long long contactno;
};
int main()
{ // student data
    student students[] = {
        {"Ankit", 50, "BSC", 14120.505, 9797939323},
        {"Mohan", 101, "BCA", 50505.555, 9797366365},
        {"Rohit", 44, "B.Tech", 60120.565, 6000666377},
        {"Manmeet", 40, "BSC", 12120.500, 9747473646},
        {"Rohan", 50, "BCA", 50120.505, 7077367363}};
    // heading
    cout << " " << string(45, '-') << endl;
    cout << " |"
         << "\033[44;1m"
         << "             STUDENT DETAILS               "
         << "\033[0m"
         << "|" << endl;
    cout << " " << string(45, '-') << endl;
    // 2nd heading
    cout << " |"
         << "\033[1;36m" << left << setw(9) << "NAME"
         << "\033[0m"
         << "|";
    cout << "\033[1;36m" << left << setw(6) << "ROLLNO"
         << "\033[0m"
         << "|";
    cout << "\033[1;36m" << left << setw(6) << "COURSE"
         << "\033[0m"
         << "|";
    cout << "\033[1;36m" << left << setw(8) << "FEES"
         << "\033[0m"
         << "|";
    cout << "\033[1;36m" << left << setw(10) << "CONTACT"
         << "\033[0m"
         << "|" << endl;
    cout << " " << string(45, '-') << endl;
    cout << fixed << setprecision(2);
    for (auto &s : students)
    {
        if (s.rollno == 44)
        {
            cout << " |"
                 << "\033[1;33m" << left << setw(9) << s.name << "\033[0m"
                 << "|"
                 << "\033[1;33m" << setw(6) << s.rollno << "\033[0m"
                 << "|"
                 << "\033[1;33m" << setw(6) << s.course << "\033[0m"
                 << "|"
                 << "\033[1;33m" << setw(7) << s.fees << "\033[0m"
                 << "|"
                 << "\033[1;33m" << setw(10) << s.contactno << "\033[0m"
                 << "|" << endl;

            cout << " " << string(45, '-') << endl;
        }
        else
        {
            cout << " |" << left << setw(9) << s.name << "|" << setw(6) << s.rollno << "|" << setw(6) << s.course << "|" << setw(7) << s.fees << "|" << setw(10) << s.contactno << "|" << endl;

            cout << " " << string(45, '-') << endl;
        }
    }
    return 0;
}