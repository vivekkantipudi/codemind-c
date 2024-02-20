#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    int max=arr[0];
    scanf("%d%d",&a,&b);
        for(i=0;i<n;i++)
        {
            if(arr[i]>max&&arr[i]>b)
            {
                max=arr[i];
            }
        }
        if(max>arr[0])
    printf("%d",max);
    else
    printf("-1");
    
}