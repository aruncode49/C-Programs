#include<stdio.h>
void frequency(int arr[], int size);
int main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s];
    frequency(arr,s);
    return 0;
}

void frequency(int arr[], int size)
{
    int i,j,count=0,k;
    printf("Enter %d elements in array: ", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    printf("Enter number for checking frequency: ");
    scanf("%d",&k);

    for(i=0; i<size; i++) 
        if(k==arr[i])
            count++;
    printf("Frequency of %d=%d",k,count);
}
