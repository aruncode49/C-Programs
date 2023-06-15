#include <stdio.h>
int greatest_number(int arr[], int);
int main()
{
    int r, b[5];
    printf("Enter numbers: ");
    r = greatest_number(b, 5);
    printf("Greatest Number is %d", r);
    return 0;
}
int greatest_number(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}