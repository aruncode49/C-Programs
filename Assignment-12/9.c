// //      1 2 3 4 3 2 1 
// //      1 2 3   3 2 1 
// //      1 2       2 1 
// //      1           1


#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=6-i && j<=2+i)
            {   printf(" ");
                if(j==4)
                k--;               
            }
            else
            {   printf("%d",k);
                j<4?k++:k--;
            }
        }
        printf("\n");
    }
    return 0;
}