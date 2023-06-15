#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1; i<=4; i++)
    {
        a=0;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=4)
                printf("%d",++a);
            else if (j>=5 && j<=3+i)
                printf("%d",--a);
            else
                printf(" ");  
        }
        printf("\n");
    }
    return 0;
}
