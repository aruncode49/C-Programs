#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    
    if(a>0)
        printf("positive");
    else if(a==0)
        printf("zero");
    else
        printf("negative");
    return 0; 
}