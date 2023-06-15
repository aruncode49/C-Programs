#include <stdio.h>
void sort_array(int arr[], int);
int main()
{
    int b[5];
    printf("Enter numbers: ");
    sort_array(b, 5);
    return 0;
}
void sort_array(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ", arr[i]);
    }
}