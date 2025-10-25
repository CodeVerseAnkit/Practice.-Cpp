#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(nullptr);
    tm *lt = localtime(&t);
    cout << "asctime(): " << asctime(lt) << endl;
    return 0;
}