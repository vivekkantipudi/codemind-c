#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1 && i%2!=1)
        {
            f=1;
        }
    }
        if(f==0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}