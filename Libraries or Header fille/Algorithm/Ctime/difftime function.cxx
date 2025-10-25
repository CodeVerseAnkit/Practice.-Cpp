#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t start = time(nullptr);

    cout << "Waiting 5 seconds...\n";
    for (volatile long long i = 0; i < 2000000000LL; i++)
        ; // dummy delay

    time_t end = time(nullptr);
    // difftime()
    double diff = difftime(end, start);
    cout << "Elapsed time (wall clock): " << diff << " seconds\n";

    return 0;
}