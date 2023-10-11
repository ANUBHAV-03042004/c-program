#include<stdio.h>
#include<string.h>
int main()
{
	char a[99],b[99];
	scanf("%s     %s",a,b);
	int n1=strlen(a);
	int n2=strlen(b);
	if(n2>n1)
	{
		printf("not identical");
	}
	else if(n1>n2)
	{
		printf("not identical");
	}
	else
	{
		int s=0;
	for(int i=0;i<n2;i++)
	{
	if(a[i]==b[i])
	{
			s++;
		}
	else
	{
		printf("not identical");
		}	
	}
	if(s==n1)
	{
	printf("identical");
}
}
}
