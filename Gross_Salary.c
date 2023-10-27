#include<stdio.h>
int main()
{
    int ba;
    float da,hra,gs;
    scanf("%d",&ba);
    if(ba<=10000)
    {
        da=ba*0.80;
        hra=ba*0.20;
        gs=ba+da+hra;
    }
    else if(ba<=20000)
    {
        da=ba*0.90;
        hra=ba*0.25;
        gs=ba+da+hra;
    }
    else
    {
        da=ba*0.95;
        hra=ba*0.30;
        gs=ba+da+hra;
    }
    printf("%.2f",gs);
}