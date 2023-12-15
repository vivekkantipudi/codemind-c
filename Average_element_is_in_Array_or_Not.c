#include<stdio.h>
int main()
{
	int n,i,sum=0,res;
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
    res=sum/n;
    for(i=0;i<n;i++)
    {
        if(res==arr[i])
        {
            printf("True");
            break;
        }
    }
    if(res!=arr[i])
    {
        printf("False");
    
    }
    
	
}