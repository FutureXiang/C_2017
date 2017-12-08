#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    //printf("!%c!",op);
    if(op=='+')
	printf("%d\n",a+b);
    else if(op=='-')
	printf("%d\n",a-b);
    else if(op=='*')
	printf("%lld\n",(long long)a*b);
    else
    {
	if(a%b==0) printf("%d\n",a/b);
	else printf("%.2lf\n",a*1.00/b);
    }
    return 0;
}
