#include<stdio.h>
int main()
{
    int i,j,n,r,c,f=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==n)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)      printf("1");
    else          printf("0");
}