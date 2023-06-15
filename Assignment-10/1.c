// Find nth term of fibonacci series.

#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf("enter a number: ");
    scanf("%d",&n);

    for(i=0; i<=n ; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of fibonacci series is %d",n,c);
    return 0;
}