#include <stdio.h>
#include <math.h>

int occurance(int arr[], int n, int m);
int main()
{
    int arr[18] = {2, 3, 4, 5, 3, 4, 5, 4, 5, 5, 6, 4, 7, 5, 5, 5, 5, 7};
    printf("%d", occurance(arr, 18, 5));
}
int occurance(int arr[], int n, int m)
{
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == m)
        {
            count++;
        }
    }
    return count;
}