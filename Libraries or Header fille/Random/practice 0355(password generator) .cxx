#include <iostream>
#include <random>
#include <string>
using namespace std;
string generatepassword(int length)
{
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                         "abcdefghijklmnopqrstuvwxyz"
                         "0123456789";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, chars.length() - 1);
    string password = "";
    for (int i = 0; i < length; i++)
    {
        password += chars[dis(gen)];
    }
    return password;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Password: " << generatepassword(8) << endl;
    }
    return 0;
}