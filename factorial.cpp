#include<stdio.h>
int main()
{
	int a,s=1;
	printf("enter a number=");
	scanf("%d",&a);
	{
	
	while(a!=0)
	{
		s=s*a;
		a--;
	}
		printf("%d",s);
	

}
	return 0;
}
