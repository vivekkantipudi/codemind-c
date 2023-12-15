#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a==arr[i])
		{
		   printf("True");
		   break;
		}
	}
		if(a!=arr[i])
		{
		    printf("False");
		}

}