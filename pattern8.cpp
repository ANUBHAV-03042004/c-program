//     *
//    *  *
//   *     *
//  *        *
//   *      *
//     *   *
//       * 
#include<stdio.h>
int main()
{
	int i,j;
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	int l,m;
	for (l=1;l<=5;l++)
	{
		for(m=5;m>=l;m--)
		{
			printf("*");
		
		}
		printf("\n");
}
}
