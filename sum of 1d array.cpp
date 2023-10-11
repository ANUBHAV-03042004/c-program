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
	
     }
     printf("[");
     printf("%d ",a[0]);
     for(i=1;i<n-1;i++)
     {
     	s=a[i]+a[i+1];
     		printf(" %d ",s);
	 }
	 printf("]");
     	
}
