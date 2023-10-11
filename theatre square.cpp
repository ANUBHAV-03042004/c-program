
// THEATRE SQUARE- 1A
#include <stdio.h>

int main()
{
     long long int n,m,a;
 long long int c;
    scanf("%lld %lld %lld",&n,&m,&a);
c=((n+a-1)/a)*((m+a-1)/a); 

printf("%lld",c);

    return 0;
}

