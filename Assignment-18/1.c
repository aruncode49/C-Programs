#include<stdio.h>
int main()
{
    int arr[10],i,s=0;
    printf("enter 10 numbers: ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("sum is %d",s);
    return 0;
}