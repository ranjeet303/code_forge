#include <stdio.h>
#include <math.h>

int fib(int n);
int main()
{
    printf("%d ", fib(4));
}
int fib(int n)
{
    int fib1[n];
    int i;
    for (i = 2; i < n; i++)
    {
        fib1[0] = 0;
        fib1[1] = 1;
        fib1[i] = fib1[i - 1] + fib1[i - 2];
    }
    return fib1[i];
}