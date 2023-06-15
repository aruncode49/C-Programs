#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("enter marks: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    
    if(m1>32 && m2>32 && m3>32 && m4>32 && m5>32)
        printf("Pass");
    else
        printf("Fail");
    return 0;
}