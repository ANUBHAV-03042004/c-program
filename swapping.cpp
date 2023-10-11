#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number=");
	scanf("%d%d",&a,&b);
	printf("Before=\n");
	printf("a=%d  b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After=\n");
	printf("a=%d  b=%d\n",a,b);
}
