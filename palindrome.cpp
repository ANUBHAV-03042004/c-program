#include<stdio.h>
int main()
{
	// 151
int a,v,b,g;
printf("enter a number=");
scanf("%d",&a);
v=a;
while(a!=0)	
{
	b=a%10;
	g=g*10+b;
	a=a/10;
}
if(g==v)
printf("palindrome");
else
printf("not a palindrome");
}
