#include<stdio.h>
#include<math.h>
//[1.2.3.4.5]
int main()
{
  int n,i,s=0,k, a[999];
	printf("enter size of array=");
	scanf("%d",&n);
	 int m,temp,pos,val;
	printf("enter numbers=");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
     for(i=0;i<n;i++)
     {//[54321]===[12345]
     
     for(int j=i+1;j<n;j++)
     {
	 
     	if(a[i]>a[j])
     	{
     		temp=a[i];
     		a[i]=a[j];
     		a[j]=temp;
		 }
	}
		  printf(" %d   ",a[i]);
		  
	 }
	 printf("\n");
	 printf("enter the position at which you have to enter value=");
	 scanf("%d",&pos);
	 
	 printf("enter the value=");
	 scanf("%d",val);
	 //[4 5 6 7 8]==2..21==[4 5 21 6 7 8]
	 for(i=n+1;i>pos-1;i--)
	 {
	 	a[i]=a[i-1];
	 }
	 a[pos-1]=val;
	 printf("d",a[i]);
}
	 
	 
	 
	 
	 
