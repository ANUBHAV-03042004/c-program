#include<stdio.h>
int main()
{
		int r;
	printf("enter the radius of circle =");
	scanf("%d",&r);
	float dia=2*r;
	printf("%f",dia);
	printf("\n");
	float circum=2*3.14*r;
	printf("%f",circum);
	printf("\n");
	float area=3.14*r*r;
	printf("%f",area);
	
	return 0;
}
