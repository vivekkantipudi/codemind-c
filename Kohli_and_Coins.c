#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    int coins10=X/10;
    int remain=X%10;
    int coins5=remain/5;
    int t=coins10+coins5;
    if(remain%5!=0)
    {
        printf("-1");
    }
    else 
    {
        printf("%d",t);
    }
    
}