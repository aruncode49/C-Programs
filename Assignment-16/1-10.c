
// f1()= Write a recursive function to print first n natural number.
// f2()= Write a recursive function to print first n natural number in reverse order.
// f3()= Write a recursive function to print first n odd natural number.
// f4()= Write a recursive function to print first n odd natural number in reverse order.
// f5()= Write a recursive function to print first n even natural number.
// f6()= Write a recursive function to print first n even natural number in reverse order.
// f7()= Write a recursive function to print square of first n natural number.
// f8()= Write a recursive function to print square of first n natural number in reverse order.
// f9()= Write a recursive function to print binary of a given decimal number.
// f10()= Write a recursive function to print octal of a given decimal number.
// f11()= Write a recursive function to print reverse of a number.


#include <stdio.h>
void f1(int);
void f2(int);
void f3(int);
void f4(int);
void f5(int);
void f6(int);
void f7(int);
void f8(int);
void f9(int);
void f10(int);
void f11(int);

int main()
{
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    f11(x);
    return 0;
}

void f11(int n)
{
    if (n > 0)
    {   printf("%d", n%10);
        f11(n=n/10);
    }
}

void f10(int n)
{
    if (n>0)
    {
        f10(n/8);
        printf("%d",n%8);
    }  
}

void f9(int n)
{
    if (n>0)
    {
        f9(n/2);
        printf("%d",n%2);
    }
}

void f8(int n)
{
    if (n > 0)
    {
        printf("%d ", n * n);
        f8(n - 1);
    }
}

void f7(int n)
{
    if (n > 0)
    {
        f7(n - 1);
        n = n * n;
        printf("%d ", n);
    }
}

void f6(int n)
{
    printf("%d ", 2 * n);
    if (n > 1)
        f6(n - 1);
}

void f5(int n)
{

    if (n == 1)
        printf("2");
    else
    {
        f5(n - 1);
        n = 2 * n;
        printf(" %d", n);
    }
}

void f4(int n)
{
    printf("%d ", 2 * n - 1);
    if (n > 1)
        f4(n - 1);
}

void f3(int n)
{

    if (n == 1)
        printf("1");
    else
    {
        f3(n - 1);
        n = 2 * n - 1;
        printf(" %d", n);
    }
}

void f2(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        f2(n - 1);
    }
}

void f1(int n)
{
    if (n > 0)
    {
        f1(n - 1);
        printf("%d ", n);
    }
}
