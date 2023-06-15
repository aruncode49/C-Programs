#include<stdio.h>
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    if(a>=100 & a<=999)
    printf("3-digit number");
    else
    printf("Not a 3-digit number");
    return 0;
}