#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{
    int sumab = sum(4, 10);
    printf("%d", sumab);
    return 0;
}
int sum(int a, int b)
{
    int sumab = a + b;
    return sumab;
}