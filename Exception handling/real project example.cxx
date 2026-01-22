#include <iostream>
#include <exception>
using namespace std;
// user defind exception class
class UserNotFoundError : public exception
{
    string msg;

  public:
    UserNotFoundError(const string &username)
        : msg("User not found: " + username) {}

    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};
// user defined exception class
class InvalidPasswordError : public exception
{
  public:
    const char *what() const noexcept override
    {
        return "Invalid password";
    }
};
// low level function (throw exception only)
void loginUser(const string &username, const string &password)
{
    if (username != "ankit")
    {
        throw UserNotFoundError(username);
    }

    if (password != "1234")
    {
        throw InvalidPasswordError();
    }

    // success
}
// mid level handling (meaning+rethrow)
void processLogin(const string &u, const string &p)
{
    try
    {
        loginUser(u, p);
        cout << "Login successful\n";
    }
    catch (const InvalidPasswordError &e)
    {
        cout << "Security log: wrong password attempt\n";
        throw; // higher level ko decision lene do
    }
}
// main function

int main()
{
    try
    {
        processLogin("ankit", "0000");
    }
    catch (const UserNotFoundError &e)
    {
        cout << e.what() << endl;
    }
    catch (const InvalidPasswordError &e)
    {
        cout << e.what() << endl;
    }
    catch (const exception &e)
    {
        cout << "System error: " << e.what() << endl;
    }
}
// if password is wrong, then it's flow:-

/* loginUser()
   ↓ throw InvalidPasswordError
processLogin()
   ↓ catch + log + rethrow
main()
   ↓ catch + user message
   */