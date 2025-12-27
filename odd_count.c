#include <stdio.h>
#include <math.h>
int count_odd(int arr[], int n);
int main()
{
    int arr[6] = {2, 4, 5, 7, 9, 13};
    printf("%d", count_odd(arr, 6));
}
int count_odd(int arr[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            m++;
        }
    }
    return m;
}