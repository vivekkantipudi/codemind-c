#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,sum1=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        sum=sum+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
        sum1=sum1+arr[i];
        }
    }
    k=abs(sum1-sum);
    printf("%d",k);
}