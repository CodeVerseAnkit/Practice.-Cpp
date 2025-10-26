#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t1 = time(nullptr);

    int t2 = time(nullptr);

    long int t3 = time(nullptr);

    cout << "time_t : " << t1 << endl;
    cout << "int : " << t2 << endl;
    cout << "long int : " << t3 << endl;

    return 0;
}