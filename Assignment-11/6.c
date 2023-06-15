//    1
//    2 1
//    3 2 1
//    4 3 2 1



#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=1; i<=4; i++)
    {   
        a=i;

        for(j=1; j<=4; j++)
        {
            if(j<=i)
                printf("%d ",a--);
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}