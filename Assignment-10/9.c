// Given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,n=0,s=0,d,p,i;
    printf("enter number:");
    scanf("%d",&x);
    y=x;
    while (y)
    {
        y=y/10;
        n++;
    }
    for(y=x; y; y=y/10)
    {
        d=y%10;
        for(p=1,i=1; i<=n;i++)
            p=p*d;
        s=s+p;    
    }
    
    if(s==x)
    printf("%d is a Armstrong Number",x);
    else
    printf("%d is not a Armstrong Number",x);
    return 0;
}