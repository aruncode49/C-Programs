#include<stdio.h>
int count(int a[], int size);
void sort_array(int arr[], int n);
int main()
{
    int array[10],i,x,k;
    x=10;
    printf("Enter 10 numbers: ");
    for(i=0; i<=x-1; i++)
        scanf("%d",&array[i]);
    k=count(array,x);
    printf("%d",k);
    return 0;
}
int count(int a[], int size)
{
    sort_array(a, size);
    int i = 0, j = 1;
    int count = 0;
    while (i <= size - 2)
    {
        if (a[i] == a[j])
            count++;
        while (a[i] == a[j])
            j++;
        i = j;
        j = j + 1;
    }
    return count;
}

void sort_array(int arr[], int n)
{
    int i, j;
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
    }
}