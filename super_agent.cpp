#include<stdio.h>
#include <stdbool.h>
int main()
{
	char a[3][3];
	bool t;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf(" %c",&a[i][j]);
		}
	}
 t = true;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]!=a[2-i][2-j])
			{
				t = false;
				break;
			}
		}
		if(t==false)
		{
			break;
		}
	}
	if(t==true)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

return 0;
}
