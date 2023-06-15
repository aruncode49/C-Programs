// 8. Write a program to print three character from the user and display character with their corresponding ASCII Code.
#include<stdio.h>
int main()
{
    char C1,C2,C3;
    printf("enter three characters: ");
    scanf("%c %c %c",&C1,&C2,&C3);
    printf("%d=%c",C1,C1);
    printf("\n%d=%c",C2,C2);
    printf("\n%d=%c",C3,C3);
    return 0;
}