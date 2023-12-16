#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=65;i<=64+k;i++)
    {
        for(j=65;j<=64+k;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}