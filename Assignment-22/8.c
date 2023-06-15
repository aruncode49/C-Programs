#include<stdio.h>
int character(char str[],int size,int ,int);
int main()
{
    int r;
    char str[20];
    r=character(str,20,4,8);
    if(r==1)
        printf("Character Found");
    else
        printf("Character Not Found");
    return 0;
}
int character(char str[],int size,int i1,int i2)
{
    char x;
    printf("Enter String: ");
    fgets(str,size,stdin);
    printf("Enter a character: ");
    scanf("%c",&x);
    for(int i=i1; i<i2; i++)
    {
        if(str[i]==x)
            return 1;
    }
    return (-1);
}