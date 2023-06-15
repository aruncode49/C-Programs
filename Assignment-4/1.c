#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("enter a number: ");
    scanf("%d", &n);
    a=n/10;
    b=a%10;
    c=n%10;
    a=a/10;
    printf("%d",a+b+c);
    return 0;
}

// The another way is 
// (x/100 + x/10%10 + x%10)