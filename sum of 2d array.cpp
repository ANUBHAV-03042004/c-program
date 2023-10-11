#include<stdio.h>
int main()
{
  int r,c,i;
	printf("enter size of array=");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],C[r][c],j;
	printf("enter 1st array numbers=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
	scanf("%d",&a[i][j]);
}
     }
    printf("enter 2nd array numbers=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
	scanf("%d",&b[i][j]);
}
     }
     
     for(i=0;i<r;i++)
     {
     	printf("[");
		for(j=0;j<c;j++)
		{
     	C[i][j]=a[i][j]+b[i][j];
     		printf(" %d ",C[i][j]);
	 }
	 printf("]");
	 printf("\n");
     	
}
}
