#include <stdio.h>
#include <math.h>
void insert(int arr[], int n, int m);
int main()
{
    int arr[18] = {2, 3, 4, 5, 3, 4, 5, 4, 5, 5, 6, 4, 7, 5, 5, 5, 5, 7};
    insert(arr, 18, 9);
    for (int i = 0; i < 19; i++)
    {
        printf("%d", arr[i]);
    }
}
void insert(int arr[], int n, int m)
{
    arr[n] = m;
}