#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float r=(5*X)/Y;
    if(r>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}