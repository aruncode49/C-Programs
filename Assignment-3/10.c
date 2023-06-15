#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    a=a+b-(b=a);
    printf("a is %d and b is %d",a,b);
    return 0;
}