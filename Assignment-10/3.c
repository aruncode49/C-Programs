// Check wheather a given number is in fibonacci series or not.

#include<stdio.h>
int main()
{
    int a=-1,b=1,c,x,i;
    printf("enter a number: ");
    scanf("%d",&x);

    for(i=0; ; i++)
    {
        c=a+b;
        if(c==x)
        {
            printf("%d is %dth term in the series",x,i);
            break;
        }
        if(c>x)
        {
            printf("%d is not in the series",x);
            break;
        }
        a=b;
        b=c;
    }
    return 0;
}