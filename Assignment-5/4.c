#include<stdio.h>
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
  
    if(a/2*2==a)
        printf("Even");
    else
        printf("Odd");
    
    return 0;
}