#include<stdio.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    int r=N-(M*K);
    if(r<=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}