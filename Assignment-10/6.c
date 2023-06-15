// Print all prime number unders 1000

#include<stdio.h>
int main()
{
    int l,u,x,i;
    l=2;
    u=100;
    for(x=l; x<=u; x++)
    {
        for(i=2; i<x; i++)
            if(x%i==0)
            break;
        if(i==x)
            printf("%d ",x);
    }
    return 0;
}



