//     A B C D E F G
//       A B C D E
//         A B C
//           A

#include<stdio.h>
int main()
{
    int i,j;
    char x;
    for(i=1; i<=4; i++)
    {
        x='A';
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",x++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}