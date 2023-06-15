#include<stdio.h>
int main()
{
    char x;
    printf("Enter Your Character: ");
    scanf("%c",&x);

   switch(x)
   {
    case  32 ... 47:
    case  58 ... 64:
    case  91 ... 96:
    case  123 ... 126:
        printf("Special Character");
        break;
    case  'a':
    case  'e':
    case  'i':
    case  'o':
    case  'u':
        printf("Vowel");
        break;
    default :
        printf("Consonant"); 
   }
   return 0;

}