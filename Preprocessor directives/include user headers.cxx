#include <iostream>
// including my header file
#include "/sdcard/Coding.cpp/Preprocessor_directives/printarr.h"
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    PrintArray(arr, 5); // from my header file
    return 0;
}