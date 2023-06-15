// 4. Write a recursive function to calculate sum of squares of first n natural number.

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
    return (n*n + f1(n-1));
}