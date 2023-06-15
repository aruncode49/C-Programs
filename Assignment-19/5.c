#include<stdio.h>
int duplicate(int a[], int size);
int main()
{
    int arr[10],k;
    k=duplicate(arr,10);
    printf("First adjacent duplicate is %d",k);
    return 0;
}

int duplicate(int a[], int size)
{
    int i,j;
    printf("Enter %d elements: ",size);
    for(i=0; i<=size-1; i++)
        scanf("%d",&a[i]);
    for(j=0; j<=size-2; j++)
    {
        if(a[j]==a[j+1])
            return a[j];
    }
}