#include<stdio.h>
int main()
{
    int n,x;
    printf("enter three digit number: ");
    scanf("%d",&n);
    x=n%10;
    x=x*100;
    n=n/10;
    n=x+n;
    printf("Rotated number is : %d",n);
    getch();
    return 0;
}
// This is another way 
// (x%10) *100 + (x/10)