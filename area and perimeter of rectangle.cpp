#include<stdio.h>
int main()
{
	int len,wid;
	printf("enter the length and width of rectangle=");
	scanf("%d%d",&len,&wid);
	int p=2*(len+wid);
	printf("%d",p);
	printf("\n");
	int area=len*wid;
	printf("%d",area);
	
	return 0;
}
