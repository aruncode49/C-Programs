#include<stdio.h>
void swap(char str[20],int size,int x,int y);
int main()
{
    char str[20];
    swap(str,20,1,7);
    return 0;   
}

void swap(char str[20],int size,int x,int y)
{
    printf("Enter a string: ");
    fgets(str,size,stdin);
    char temp;
    temp = str[x];
    str[x] = str[y];
    str[y] = temp;
    printf("%s",str);
}