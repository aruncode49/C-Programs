//       A B C D C B A
//         A B C B A 
//           A B A 
//             A

#include<stdio.h>
int main()
{
    int i,j;
    char x='A';
    for(i=1; i<=4; i++)
    {
        x--;
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=4)
                printf("%c",++x);
            else if (j>=5 && j<=8-i)
                printf("%c",--x);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}