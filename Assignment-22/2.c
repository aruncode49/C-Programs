#include<stdio.h>
#include<string.h>
void reverse_string(char str[],int size);
int main()
{
    char str[20];
    printf("Enter string: ");
    reverse_string(str,20);
    return 0;
}
void reverse_string(char str[],int size)
{
    int i;
    fgets(str,size,stdin);
    str[strlen(str)-1]='\0';
    for(i=strlen(str)-1; i>=0; i--)
        printf("%c",str[i]);   
}