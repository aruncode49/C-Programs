#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    printf("enter elements in first matrix: ");
    for ( int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements in second matrix: ");
    for ( int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of two matrices is : \n");
    for ( int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}