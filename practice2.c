#include <stdio.h>
#include <math.h>

// int sum(int n);
// int num;

// int main()
// {
//     printf("ENTER THE NUMBER UPTO WHICH YOU WANT TO CALCULATE THE SUM: \n");
//     scanf("%d", &num);
//     printf("\n %d", sum(num));
// }
// int sum(int n)
// {

//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         int sumn1 = sum(n - 1);
//         int sumN = n + sumn1;
//         return sumN;
//     }
// }
// int SumOfDigits(int n);
// int main()
// {
//     int num;
//     printf("ENTER THE NUMBER : \n");
//     scanf("%d", &num);
//     printf("\n %d", SumOfDigits(num));
// }
// int SumOfDigits(int n)
// {
//     int temp_n = n;
//     int m = 0;
//     int sum = 0;
//     while (temp_n != 0)
//     {
//         temp_n = temp_n / 10;
//         m++;
//     }

//     for (int i = 0; i < m; i++)
//     {
//         sum += n % 10;
//         n = n / 10;
//     }
//     return sum;
// }

// float sqroot(int n);
// int main()
// {
//     int num;
//     printf("enter a number :");
//     scanf("%d", &num);
//     printf("the square root of number is %f", sqroot(num));
// }
// float sqroot(int n)
// {
//     return sqrt(n);
// }

// withgout using pointers;
// void got(int a, int b);
// int main()
// {
//     got(5, 7);
// }
// void got(int a, int b)
// {
//     if (a > b)
//     {
//         printf("%d is greater than %d", a, b);
//     }
//     else if (b > a)
//     {
//         printf("%d is greater than %d", b, a);
//     }
//     else
//     {
//         printf("both the number are equal");
//     }
// }

// using pointers

void got(int *a, int *b);
int main()
{
    got(5, 7);
}
void got(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("both the number are equal");
    }
}