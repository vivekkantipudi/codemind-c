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
    int z;
    scanf("%d",&z);
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            c++;
        }
    }
    printf("%d",c);
    
}