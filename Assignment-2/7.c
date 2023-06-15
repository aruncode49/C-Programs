// 7. Write a program to input an ASCII code from the user and print its corresponding character.

#include<stdio.h>
int main()
{
  int code;
  printf("enter ASCII code: ");
  scanf("%d",&code);
  printf("Corresponding character is %c",code);
  return 0;
}