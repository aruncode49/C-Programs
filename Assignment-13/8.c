#include<stdio.h>
int main()
{
    char x;
    printf("Enter Your Character: ");
    scanf("%c",&x);

   switch(x)
   {
    case 'A' ... 'Z' :
        printf("Upper Case");
        break;
    case 'a' ... 'z' :
        printf("Lower Case");
        break;
    default :
        printf("Special Character"); 
   }
   return 0;

}