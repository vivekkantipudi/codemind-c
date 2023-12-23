#include<stdio.h>
int main()
{
	char str[100];
	int i,l=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
	    if(str[i]>=97 && str[i]<=122)
		{
			l++;
		}	
	} 
	printf("%d",l);
}
