#include<stdio.h>
//int main()
//{
//	int n;
//	printf("enter the size=");
//	scanf("%d",&n);
//	int a[n],b[n];
//	for(int i=0;i<n;i++)
//	{
//	scanf("%d",&a[i]);
//}
//for(int j=0;j<n;j++)
//{
//	b[j]=a[j];
//	printf("b[j]values=%d\n",b[j]);
//}
//}


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
for(int j=n-1;j>=0;j--)
{
	printf("%d ",a[j]);
}
}
	

