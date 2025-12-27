#include <stdio.h>
#include <math.h>

void reverse_arr(int n, int arr[]);

int main()
{
    int arr[5] = {5, 6, 7, 8, 90};

    reverse_arr(5, arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverse_arr(int n, int arr[])
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
