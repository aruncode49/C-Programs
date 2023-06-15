#include<stdio.h>
#include<string.h>

void compare(char a[],int size1,char b[],int size2);

int main()
{
    char str1[20];
    char str2[20];
    compare(str1,20,str2,20);
    return 0;
}
void compare(char a[],int size1,char b[],int size2)
{
    printf("Enter first string: ");
    fgets(a,size1,stdin);
    printf("Enter second string: ");
    fgets(b,size2,stdin);
    int x = strcmp(a,b);
    printf("%d",x);
}