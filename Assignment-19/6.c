#include <stdio.h>
void swap(int a[], int size, int i1, int i2);
int main()
{
    int arr[10], x, y;
    printf("Enter first index: ");
    scanf("%d", &x);
    printf("Enter second index: ");
    scanf("%d", &y);
    swap(arr, 10, x, y);
    return 0;
}
void swap(int a[], int size, int i1, int i2)
{
    int i;
    printf("Enter %d elements: ", size);
    for (i = 0; i <= size - 1; i++)
        scanf("%d", &a[i]);

    int temp = a[i1-1];
    a[i1-1] = a[i2-1];
    a[i2-1] = temp;

    for (i = 0; i <= size - 1; i++)
        printf("%d ", a[i]);
}