#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Heading
    cout << "\033[1;44;97m"
         << "           STUDENT MARKSHEET           "
         << "\033[0m\n";

    cout << string(45, '-') << endl;

    // Table header
    cout << "\033[1;34m" << left << setw(15) << "NAME"
         << setw(10) << "ROLL NO"
         << setw(10) << "MARKS"
         << setw(10) << "STATUS"
         << "\033[0m" << endl;

    cout << string(45, '-') << endl;

    // Student data
    struct Student
    {
        string name;
        int roll;
        double marks;
    };

    Student s[] = {
        {"Ankit", 50, 84.33},
        {"Mohit", 80, 69.699},
        {"Kushal", 15, 95.55},
        {"Chandu", 66, 34.333},
        {"Harsh", 50, 50.555}};

    cout << fixed << setprecision(2);

    double total = 0;
    for (auto &st : s)
    {
        total += st.marks;

        // topper highlight
        if (st.marks >= 90)
            cout << "\033[1;32m"; // green bold

        cout << left << setw(15) << st.name
             << setw(10) << st.roll
             << setw(10) << st.marks
             << (st.marks >= 40 ? "PASS" : "FAIL")
             << "\033[0m" << endl;
    }

    cout << string(45, '-') << endl;

    double avg = total / 5.0;

    // Total and percentage row
    cout << "\033[1;33m" << left << setw(15) << "TOTAL"
         << setw(10) << "-"
         << setw(10) << total
         << "\033[0m" << endl;

    cout << "\033[1;35m" << left << setw(15) << "AVERAGE %"
         << setw(10) << "-"
         << setw(10) << avg
         << "\033[0m" << endl;

    cout << string(45, '-') << endl;

    return 0;
}