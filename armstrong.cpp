#include<stdio.h>
#include<math.h>
int main()
{
	int a,num,m,d,e;
	printf("enter a number=");
	scanf("%d",&num);
	a=num;
	e=log10(num)+1;
	while(num!=0)
	{
		d=num%10;
		m=m+pow(d,e);
		num=num/10;
	}
	if (m==a)
	{
	

	printf("right");
}
else
printf("wrong");

return 0;

}
