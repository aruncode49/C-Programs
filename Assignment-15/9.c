#include<stdio.h>
void armstrong_between(int a, int b);
int main()
{
    int s_no, l_no;
    printf("enter starting number: ");
    scanf("%d",&s_no);
    printf("enter last number: ");
    scanf("%d",&l_no);
    armstrong_between(s_no,l_no);
    return 0;
}
void armstrong_between(int a, int b)
{
    int x,r,p;
    while(a<b)
    {
        x=a;
        int d=0;
        int s=0;
        while (x)
        {
            x=x/10;
            d++;
        }
        x=a;
        while(x)
        {
            r=x%10;
            for (int i = 1,p=1; i <=d; i++)
            {
                p=p*r;
            }
            s=s+p;
            x=x/10;           
        }
        if(s==a)
        printf("%d ",a);
        a++;
    }
}