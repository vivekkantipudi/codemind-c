#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,f=0;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        if(c==n)
        {
            f=1;
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}