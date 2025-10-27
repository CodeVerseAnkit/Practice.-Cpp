#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "Ram,18,85.5";
    istringstream iss(line);
    string templine;
    string name;
    int age;
    float marks;
    while (getline(iss, templine, ','))
    {
        if ((templine[0] >= '0') && (templine[0] <= '9') && (templine.find('.') != string::npos))
        {
            marks = stof(templine);
        }
        else if (templine[0] >= '0' && templine[0] <= '9')
        {
            age = stoi(templine);
        }
        else
        {
            name = templine;
        }
    }
    cout << "Student Details: " << endl;
    cout << " Name: " << name << endl;
    cout << " Age: " << age << endl;
    cout << " Marks: " << marks << endl;
    return 0;
}