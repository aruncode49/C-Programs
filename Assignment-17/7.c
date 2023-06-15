// 7. Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>
int hcf(int a, int b);
int main()
{
    int x,y,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    result= hcf(x,y);
    printf("HCF is %d",result);
    return 0;
}
int hcf(int a, int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return hcf(a,b%a);
    }
}