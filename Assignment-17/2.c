// 2. Write a recursive function to calculate sum of first n odd natural number.

#include<stdio.h>
int f1(int);
int main()
{
    int x,k;
    printf("enter a numbers: ");
    scanf("%d",&x);
    k= f1(x);
    printf("%d",k);
    return 0;
}

int f1(int n)
{
    if(n==1)
        return 1;
    return (2*n-1 + f1(n-1));
}
