#include<stdio.h>
int main()
{
  int n,i,s=0;
	printf("enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("enter a number=");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
s=s+a[i];
     }
     		printf("%d",s);
}
