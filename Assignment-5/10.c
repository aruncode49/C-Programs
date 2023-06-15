#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);

    // if(a>b & a>c)
    // printf("%d",a);
    // else
    // {
    //     if(b>a & b>c)
    //     printf("%d",b);
    //     else
    //     {
    //         if(c>a & c>b)
    //         printf("%d",c);
    //         else
    //         {
    //             if(a==b || a==c)
    //             printf("%d",a);
    //             else
    //             {
    //                 if(b==a || b==c)
    //                 printf("%d",b);
    //                 else
    //                 {
    //                     if(c==a || c==b)
    //                     printf("%d",c);
    //                     else
    //                     printf("%d",a);
    //                 }
    //             }
    //         }
    //     }
    // }

if(a>b)
    if(a>c)
        printf("%d",a);
    else
        printf("%d",c);
else
    if(b>c)
        printf("%d",b);
    else
        printf("%d",c);




// if(a>b)
//     printf((a>c)?("%d",a):("%d",c););
// else
//     printf((b>c)?("%d",b):("%d",c));


//    return 0; 
}