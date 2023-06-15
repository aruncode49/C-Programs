#include<stdio.h>
int main()
{
    int a,b,c,D;
   printf("enter value of a,b and c: ");
   scanf("%d %d %d",&a,&b,&c);

   D = b*b-4*a*c;

   if(D>0)
   printf("Real & Distinct Roots");
   else if(D==0)
   printf("Real & Equal Roots");
   else
   printf("Imaginary Roots");
    return 0;
}