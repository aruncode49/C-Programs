// Find next prime number of a given number

#include<stdio.h>

int main()
{
    int n,x,i;
    printf("enter number");
    scanf("%d",&n);
    for(x=n+1;  ;x++)
    {
        for(i=2; i<x; i++)
            if(x%i==0)
                break;
          
        if(x==i) 
        { printf("Next prime number is %d",x);          
           break;   
        }
    }
   
    return 0;
}