#include<stdio.h>
int main()
{
	int n;
	printf("enter the size=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
int temp;
for(int j=0;j<n;j++)
{
	for(int k=j+1;k<n;k++)
	{
	if(a[j]>a[k])
	{
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
	}
}
}
printf("%d",a[n-2]);
}


