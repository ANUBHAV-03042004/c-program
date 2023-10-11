#include<stdio.h>
int main()
{
	int n;
	printf("enter a number=");
	scanf("%d",&n);
	int sum=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		printf("the given number is perfect number");

	else
		printf("not a perfect number");
	return 0;
}
