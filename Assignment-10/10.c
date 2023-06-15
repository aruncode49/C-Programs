// // Print all Armstrong number under 1000

#include<stdio.h>
int main()
{
    int x,y,n,d,p,i,sum;
    for(x=1; x<=10000; x++)
    {
        y=x;
        n=0;
        while(y)
        {
            y=y/10;
            n++;
        }
        for(sum=0,y=x; y ; y=y/10)
        {
            d=y%10;
            for(p=1,i=1; i<=n; i++)
                p=p*d;
            sum=sum+p;
        }
        if(sum==x)
        printf("%d ",x);
    }
    return 0;
}
// Print all Armstrong number under 1000

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int x,y,n,d,p,i,sum;
//     for(x=1; x<=10000; x++)
//     {
//         y=x;
//         n=0;
//         while(y)
//         {
//             y=y/10;
//             n++;
//         }
//         for(sum=0,y=x; y ; y=y/10)
//         {
//             d=y%10;
//             p=pow(d,n);
//             sum=sum+p;
//         }
//         if(sum==x)
//         printf("%d ",x);
//     }
//     return 0;
// }



