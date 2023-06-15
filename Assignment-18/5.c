#include <stdio.h>
int main()
{
    int i, min, arr[10];
    printf("enter 10 numbers: ");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    min = arr[0];
    for(i=1; i<=9; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    printf("Smallest number is %d",min);
    return 0;
}