#include<stdio.h>
int main()
{
    int i,n,m,fd=0,sd=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fd=fd+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sd=sd+i;
        }
    }
    if((n==sd)&&(m==fd))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}