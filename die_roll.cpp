#include<stdio.h>
int main()
{
	int a,b,max=0,c=0,ttl=6;
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	c=6-max+1;
	if(c%2==0)
	{
		c/=2;
		ttl/=2;
	}
    if(c%3==0)
	{
		c/=3;
		ttl/=3;
	}
	 if(c%6==0)
	{
		c/=6;
		ttl/=6;
	}
	printf("%d/%d",c,ttl);
}
