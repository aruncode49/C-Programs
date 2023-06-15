#include<stdio.h>
#include<string.h>
int calculate_length(char str[],int size);

int main()
{
    char str[20];
    printf("Enter string: ");
    int k=calculate_length(str,20);
    printf("lenth=%d",k);
    return 0;
}

int calculate_length(char str[],int size)
{
    fgets(str,size,stdin);
    str[strlen(str)-1]='\0';
    int x =strlen(str);
    return x;
}