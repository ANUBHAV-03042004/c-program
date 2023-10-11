#include<stdio.h>
#include<math.h>
//175
int main()
{
		int a,b,e,s=0,i,m;
	printf("enter a number=");
	scanf("%d",&a);
	m=a;
		e=log10(a)+1;
	for (i=0;a!=0;i++)
	{
	
	b=a%10;
	s=s+pow(b,e-i);
	a=a/10;
}
if(m==s)
{

printf("%d\n",s);
printf("right");
}
else
printf("wrong");
return 0;
}
