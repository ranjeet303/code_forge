#include <stdio.h>
#include <math.h>

// call by reference.

void got(int *a, int *b);
int main()
{
    int a, b;
    printf("enter two numbers : \n");
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second  number : ");
    scanf("%d", &b);
    got(&a, &b);
}
void got(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d is greater than %d", *a, *b);
    }
    else if (*b > *a)
    {
        printf("%d is greater than %d", *b, *a);
    }
    else
    {
        printf("both the number are equal");
    }
}