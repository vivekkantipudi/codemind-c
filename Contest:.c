#include<stdio.h>
int main()
{
    int x,e,h,r;
	scanf("%d%d%d",&x,&e,&h);
	r=(e*1)+(h*2);
	if(x<=r)
	{
		printf("Qualify");
	}
	else if(x>r)
	{
		printf("Not Qualify");
	}	
}
