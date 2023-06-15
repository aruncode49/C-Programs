#include <stdio.h>
int main()
{
    int i, max, arr[10];
    printf("enter 10 numbers: ");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1; i<=9; i++)
    {
        if(max< arr[i])
            max=arr[i];
    }
    printf("Greatest number is %d",max);
    return 0;
}