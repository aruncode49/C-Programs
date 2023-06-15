//WAP to calculate factorial of a number

#include<stdio.h>
int main()
{
    int i,n,S=1;
    printf("enter number");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
        S=S*i;
    printf("%d",S);

    return 0;
    
}