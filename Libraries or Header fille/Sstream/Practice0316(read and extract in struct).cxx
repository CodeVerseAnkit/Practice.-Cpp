#include <iostream>
#include <sstream>
using namespace std;
// struct
struct student
{
    string name;
    int age;
    string course;
};
int main()
{
    string num = "Amit 19 BCA";
    istringstream iss(num);
    student s;
    // extract data
    iss >> s.name >> s.age >> s.course;

    cout << " Student details: " << endl
         << " Name: " << s.name << "\n Age: " << s.age << "\n Course: " << s.course << endl;
    return 0;
}