// 8. Write a recursive function to print first n term of fibonacci series.

#include <stdio.h>
void printfib(int);
int fib(int n);
int main()
{
    int x, k;
    printf("enter a numbers: ");
    scanf("%d", &x);
    printfib(x);
    return 0;
}

void printfib(int n)
{
    if(n==0)
        printf("%d",n);
    else
        printfib(n-1);
        printf("%d ",fib(n));       
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}