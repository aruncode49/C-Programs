//WAP to count digit in a number

#include<stdio.h>
int main()
{
    int i,n,S=0;
    printf("enter number");
    scanf("%d",&n);

    while(1)
    {
        n=n/10;
        S=S+1;
        if(n==0)
           break;
    }
        printf("%d",S);

    return 0;
    
}