//     ABCDCBA
//     ABC CBA 
//     AB   BA 
//     A     A

#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1; i<=4; i++)
    {
        k='A';
        for(j=1; j<=7; j++)
        {
            if(j>=6-i && j<=2+i)
            {   printf(" ");
                if(j==4)
                k--;               
            }
            else
            {   printf("%c",k);
                j<4?k++:k--;
            }
        }
        printf("\n");
    }
    return 0;
}