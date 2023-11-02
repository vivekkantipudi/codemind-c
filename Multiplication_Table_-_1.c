#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1; i<=12; i++)
    {
        printf("%d x %d = %d
",N,i,N*i);
    }
    
}