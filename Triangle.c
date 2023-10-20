#include<stdio.h>
int main()
{
    int S1,S2,S3;
    scanf("%d%d%d",&S1,&S2,&S3);
    if(S1==S2&&S1==S3&&S2==S3)
    {
        printf("Equilateral triangle");
    }
    else if(S1==S2||S1==S3||S2==S3)
    {
        printf("Isosceles triangle");
    }
    else 
    {
        printf("Scalene triangle");
    }
}