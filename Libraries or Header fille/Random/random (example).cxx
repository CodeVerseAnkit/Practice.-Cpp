#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;                         // seed (base to hardware entropy)
    mt19937 gen(rd());                        // generate random number using random_device seed
    uniform_int_distribution<int> dis(1, 10); // it map the generated number into the given range
    cout << dis(rd);                          // print number
}