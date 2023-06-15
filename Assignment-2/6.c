// 6. Write a program to input a character from user and print its ASCII code.
#include<stdio.h>
int main()
{
  char character;
  printf("enter character: ");
  scanf("%c",&character);
  printf("ASCII code is %d",character);
  return 0;
}