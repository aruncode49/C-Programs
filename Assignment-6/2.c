#include<stdio.h>
int main()
{
    float  cp,sp;
    float profit, loss;
    printf("enter cp & sp: ");
    scanf("%f %f",&cp,&sp);

    profit=(sp/cp-1)*100.0;
    loss=(1-sp/cp)*100.0;

    if(cp>sp)
    printf("loss=%0.2f",loss);
    else
    printf("profit=%0.2f",profit);
    return 0;
}