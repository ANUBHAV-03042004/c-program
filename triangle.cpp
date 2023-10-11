
// Triangle- 6A
#include <stdio.h>  
int main()
{
      int a[4];
scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);

for(int i=0;i<4;i++)
{
	for(int k=i+1;k<4;k++)
{
	if(a[i]>a[k])
	{
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
}
}//1 2 3 4
if(((a[0]+a[1])>a[2])||((a[1]+a[2])>a[3]))
{
	printf("TRIANGLE");
}
else if((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3]))
{
printf("SEGMENT");	
}
else
{
printf("IMPOSSIBLE");	
}



    return 0;
}

