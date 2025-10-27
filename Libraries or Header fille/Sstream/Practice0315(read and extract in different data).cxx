#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string num = "Amit 19 BCA";
    istringstream iss(num);
    string name;
    int age;
    string course;
    iss >> name >> age >> course;
    cout << " Student details: " << endl
         << " Name: " << name << "\n Age: " << age << "\n Course: " << course << endl;
    return 0;
}