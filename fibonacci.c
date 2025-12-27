#include <stdio.h>
#include <math.h>

#include <stdio.h>

int fib(int n);

int main()
{
    printf("%d\n", fib(4));
    return 0;
}

int fib(int n)
{
    int fib1[n];

    fib1[0] = 0;
    fib1[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib1[i] = fib1[i - 1] + fib1[i - 2];
    }

    return fib1[n - 1];
}
