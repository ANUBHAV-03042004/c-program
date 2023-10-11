#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c=0;
	double d;
	char s;

	printf("enter [+ for add][- for sub][*for mul][/ for div][p for power][r for square root]=");
	scanf(" %c",&s);

	if (s=='+')
	{
	printf("enter the value of a=");
	scanf("%d",&a);	
	printf("enter the value of b=");
	scanf("%d",&b);
c=a+b;
printf("sum of %d and %d =%d",a,b,c);
}
    else if  (s=='-')
	{
			printf("enter the value of a=");
	scanf("%d",&a);	
	printf("enter the value of b=");
	scanf("%d",&b);
	
c=a-b;
printf("subtraction of %d and %d =%d",a,b,c);
}
	else if (s== '*')
	{
			printf("enter the value of a=");
	scanf("%d",&a);	
	printf("enter the value of b=");
	scanf("%d",&b);
	
c=a*b;
printf("multiplication of %d and %d =%d",a,b,c);
}
	else if (s=='/')
	{
			printf("enter the value of a=");
	scanf("%d",&a);	
	printf("enter the value of b=");
	scanf("%d",&b);
	
c=a/b;
printf("division of %d and %d =%d",a,b,c);
}
	else if (s=='p')
	{
			printf("enter the value of a=");
	scanf("%d",&a);	
	printf("enter the value of b=");
	scanf("%d",&b);
	
c=pow(a,b);
printf("digit=%d it's power=%d and result=%d",a,b,c);
}
else if (s=='r')
	{
	printf("enter the value of a=");
	scanf("%d",&a);
c=sqrt(a);
printf("root of %d is %d ",a,c);
}
else
printf("syntax error");
}
