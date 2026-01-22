#include <iostream>
using namespace std;
void back_button()
{
    char ch;
    do
    {
        cout << "  Do you want to back(y): ";
        cin >> ch;
    } while (tolower(ch) != 'y');
}
int main()
{
    back_button();
    return 0;
}