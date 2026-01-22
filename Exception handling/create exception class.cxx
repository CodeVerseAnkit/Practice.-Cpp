#include <iostream>
#include <exception>
using namespace std;
// user defined exception class
class FileOpenError : public exception
{
    string msg; // to store message

  public:
    // constructor
    FileOpenError(const string &filename)
        : msg("Failed to open file: " + filename) {}

    const char *what() const noexcept override
    // noexcept :- it don't throw exception while handling another exception
    // override:- it override the virtual function
    {
        return msg.c_str();
        // c_str convert string in c style string
    }
};
int main()
{
    try
    { // throw exception
        throw FileOpenError("data.txt");
    }
    catch (const exception &e)
    { // catch exception
        cout << e.what();
    }
    return 0;
}