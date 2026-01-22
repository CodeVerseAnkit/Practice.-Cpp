#include <iostream>
using namespace std;
// exception class
class invalidageerror : public exception
{
    string msg;

  public:
    invalidageerror(const int &age) : msg(to_string(age) + " is a invalid age") {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};
// low level exception function
void age_verification(int &age)
{
    if (age <= 0 || age >= 100)
        throw invalidageerror(age);
}
// middle level exception function
void processage(int &age)
{
    try
    {
        age_verification(age);
        cout << "Age verified successfully " << endl;
    }
    catch (const invalidageerror &e)
    {
        cout << " Age verification failed " << endl;
        throw;
    }
}

int main()
{
    int age;
    try
    {
        cout << " Enter your age: ";
        cin >> age;
        processage(age);
    }
    catch (const invalidageerror &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}