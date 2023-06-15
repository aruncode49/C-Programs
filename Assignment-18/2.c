#include<stdio.h>
int main()
{
    int arr[10],i,s=0;
    float avg;
    printf("enter 10 numbers: ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avg =s/10.0;
    printf("Average is %f",avg);
    return 0;
}