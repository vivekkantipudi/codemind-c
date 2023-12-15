#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    res=sum/(n*1.0);
    printf("%.2f",res);
    
}