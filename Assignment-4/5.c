#include<stdio.h>
int main()
{
    int n,d,r;
    printf("enter number: ");
    printf("\nenter digit: ");
    scanf("%d%d", &n,&d);
    n=n*10;
    r=n+d;
    printf("The result is %d",r);
    return 0;
}