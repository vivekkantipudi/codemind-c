#include<stdio.h>
int main()
{
    int i,n,c=0,avg,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}