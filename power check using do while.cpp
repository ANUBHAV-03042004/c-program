#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
int n,d=0;
    scanf("%d",&n);
    int f=n;
do
{
	d++;
	n=n/2;
}
while(n!=0);
if(pow(2,d-1)==f)
	printf("1");
else
printf("0");
}
