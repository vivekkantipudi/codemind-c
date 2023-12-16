#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=64+n;i>=65;i--)
    {
        for(j=64+n;j>=65;j--)
        {
            if(i<=j)
            {
                printf("%c ",i);
            }
        }
        printf("
");
    }
}