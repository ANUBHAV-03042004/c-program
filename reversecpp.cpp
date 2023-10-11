#include<stdio.h>
int main()
{
	int a,r=0;
	scanf("%d",&a);
	while(a!=0)
	{
		int d=a%10;
      r=r*10+d;
      a=a/10;
	}
	printf("%d",r);
}
