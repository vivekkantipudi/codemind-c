#include<stdio.h>
int main()
{
    int i,m,n,a,b,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=i*a;
        n=m%b;
        if(n==0)
        {
            gcd=(a*b)/m;
            printf("%d",gcd);
            break;
        }
    }
}