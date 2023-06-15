//    1
//    1 2 
//    1 2 3
//    1 2 3 4
//    1 2 3 4 5


#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=1; i<=5; i++)
    {   
        a=1;

        for(j=1; j<=5; j++)
        {
            if(j<=i)
                printf("%d",a++);
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}