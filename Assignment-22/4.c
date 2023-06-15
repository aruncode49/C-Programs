#include<stdio.h>
#include<ctype.h>
void upper(char str[],int size);
int main()
{
    char str[20];
    printf("Enter string: ");
    upper(str,20);
    return 0;
}

void upper(char str[],int size)
{
    fgets(str,size,stdin);
    for(int i=0; str[i];i++)
        printf("%c",toupper(str[i]));
}