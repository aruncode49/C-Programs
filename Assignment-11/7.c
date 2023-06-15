/*   A B C D E
       A B C D
         A B C
           A B
             A    */
    

#include<stdio.h>
int main()
{
    int i,j;
    char x;

    for(i=1; i<=5; i++)
    {   
        x='A';

        for(j=1; j<=5; j++)
        {
            if(j>=i && j<=5)
                printf("%c",x++);
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}