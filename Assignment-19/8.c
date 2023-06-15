#include<stdio.h>
void sort_array(int arr[], int n);
void print_unique(int arr[], int size);
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    print_unique(arr, size);
    return 0;
}

void print_unique(int arr[], int size)
{
    int i;
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    sort_array(arr,size);  // function call for sorting
    i=0;
    while(i<size)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("%d ",arr[i]);
            i++;
        }                 
        else
            i++;
    }
}

void sort_array(int array[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}