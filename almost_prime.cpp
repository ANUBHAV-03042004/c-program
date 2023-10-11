#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int j)
{
	int c=0;
	if(j<=1)
	{
		return false;
	}
	if(j==2)
	{
		return true;
	}
	if(j%2==0)
	{
		return false;
	}
	for(int i=3;i<=sqrt(j);i+=2)
	{
		if(j%i==0)
		{
			return false;	
		}
	}	
		return true;
}
int main()
{
	int n,c=0,d=0;
	scanf("%d",&n);
	for(int i=6;i<=n;i++)
	{
		c=0;
		for(int j=2;j<=i/2;j++)
		{				
			if(prime(j)==true && i%j==0)
			{
				c+=1;		
			}
	    	}	    		
		
		if(c==2)
		{
			d++;
		}
	}
			printf("%d",d);
return 0;
}
