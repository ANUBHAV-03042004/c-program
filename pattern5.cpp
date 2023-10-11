#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	int l=5,m;
	for (l;l>=1;l--)
	{
		for(m=1;m<=l;m++)
		{
			printf("*");
		}
		printf("\n");
	}
}
