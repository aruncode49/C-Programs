#include<stdio.h>
int main()
{
    int arr[10], i,j,temp;
    int n=10;
    printf("enter 10 numbers: ");
    for(i=0; i<n ;i++)
    scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[i]);
    }
    return 0;
}