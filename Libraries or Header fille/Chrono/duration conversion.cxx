#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{ // duration conversion
    seconds s(100);
    milliseconds ms = s;
    cout << "Seconds->milliseconds: " << ms.count() << endl;
    // duration caste
    auto sec = duration_cast<seconds>(ms);
    cout << "Milliseconds-> seconds: " << sec.count() << endl;
    // chrono literals
    auto total = 20s + 500ms;
    cout << " Total: " << duration_cast<milliseconds>(total).count() << endl;
    return 0;
}