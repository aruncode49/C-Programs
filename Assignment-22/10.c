#include<stdio.h>
int check_alphanumeric(char str[],int size);
int main()
{
    int result;
    char str[20];
    result=check_alphanumeric(str,20);
    if(result==7)
        printf("Alphanumeric");
    else
        printf("Not Alphanumeric");
    return 0;
}

int check_alphanumeric(char str[],int size)
{
    int count=0;
    printf("Enter string: ");
    fgets(str,size,stdin);
    for(int i=0; str[i]; i++)
    {
        switch(str[i])
        {
            case 'a'...'z': count++;
                            break;
        }
    }  
    for(int i=0; str[i]; i++)
    {
        switch(str[i])
        {
            case 0 ... 9:  count++;
                            break;
        }
    } 
    return count; 
}