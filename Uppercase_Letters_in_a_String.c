#include<stdio.h>
int main()
{
	char str[200];
	int i,l=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
	    if(str[i]>=65 && str[i]<=90)
		{
			l++;
		}	
	} 
	printf("%d",l);
}
