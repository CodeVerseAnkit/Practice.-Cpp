#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    // conversion between units
    milliseconds ms(2345);

    auto sec = duration_cast<seconds>(ms);
    cout << "Milliseconds to seconds: " << sec.count() << endl;
    return 0;
}