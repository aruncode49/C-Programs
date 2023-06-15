//     A B C D E
//       B C D E
//         C D E
//           D E
//             E

#include<stdio.h>
int main()
{
    char i,j,x;
    
    for(i='A'; i<='E';i++)
    {
        x=i;

        for(j='A'; j<='E';j++)
        {
            if(j>=i && j<='E')
                printf("%c",x++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}