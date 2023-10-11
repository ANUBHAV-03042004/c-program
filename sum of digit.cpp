#include<stdio.h>
int main()
{
	int a,b,s;
	printf("enter a number=");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		s+=b;
		a=a/10;
	}
	printf("sum=");
	printf("%d",s);
	return 0;
}
