#include<stdio.h>
int main()
{
    int i,f=0,a,b,r,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        t=i;
        while(t!=0)
        {
            r=t%10;
           if(r==0 || i%r!=0)
           {
                f=1;
           }
           t/=10;
        }
        if(f==0)
        {
            printf("%d ",i);
        }
    }
}