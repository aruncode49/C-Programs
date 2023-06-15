// Check two given number are co-prime or not.

#include<stdio.h>
int main()
{
    int a,b,H,i;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    for(H=a<b?a:b; H>=1; H--)
    {
        if(a%H==0 && b%H==0)
            break;
    }
        if(H==1)
            printf("Given number are co-prime");
        else
            printf("Given number are not co-prime");
        return 0;
}
