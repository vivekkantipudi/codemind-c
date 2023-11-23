#include<stdio.h>
int main()
{
    int n,sum=0,r,r1;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        r1=n%10;
        
        n=n/10;
    }
    sum=r+r1;
    printf("%d",sum);
}