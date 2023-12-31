#include<stdio.h>
int main()
{
    int i,n,r,sum=0,k;
    scanf("%d",&n);
    k=n*n;
    for(i=1;i<=n;i++)
    {
        r=k%10;
        sum=sum+r;
        k=k/10;
     }
     if(sum==n)
     {
         printf("Neon Number");
     }
     else
     {
         printf("Not Neon Number");
     }
}