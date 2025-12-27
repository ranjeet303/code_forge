#include <stdio.h>
#include <math.h>

int largest_no(int arr[], int n);
int main()
{
    int arr[18] = {2, 3, 4, 5, 3, 4, 5, 4, 5, 5, 6, 4, 7, 5, 5, 5, 5, 7};
    printf("%d", largest_no(arr, 18));
}
int largest_no(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            temp = arr[i + 1];
        }
        else
        {
            temp = arr[i];
        }
    }
    return temp;
}