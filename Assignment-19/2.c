#include <stdio.h>
int smallest_number(int arr[], int);
int main()
{
    int r, b[5];
    printf("Enter numbers: ");
    r = smallest_number(b, 5);
    printf("Smallest Number is %d", r);
    return 0;
}
int smallest_number(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}