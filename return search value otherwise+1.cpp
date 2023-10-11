#include<stdio.h>
#include<math.h>
//[1.2.3.4.5]
int main()
{
  int n,i,s=0,k;
	printf("enter size of array=");
	scanf("%d",&n);
	int a[n],m,temp;
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
	printf("enter the value to be searched=");
    scanf("%d",&m);
	  for(k=0;k<n;k++)
     {
         if(a[k]==m)
     	 {
     	   printf("%d",k);
     	   break;
		 }
	 }
	 if(k>=n)
		 {
		 	for(int l=0;l<n;l++)
		 	{
		 		if(m<a[l])
			 {
			 
	         printf("%d",a[l]);
	         break;
	     }
	 else if(m>a[n-1])
	 {
	 
           printf("larger value than provided values"); 
           break;
	    }
		 }
     }
 }    

