#include <stdio.h>
#include <math.h>
int is_prime(int x)
{
    if(x==1) return 0;
    if(x==2) return 1;
    int i;
    for(i=2;i<=sqrt(x)+1;i++)
    {
	if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    int in;
    scanf("%d",&in);
    while(in%2==0)
    {
	printf("2 ");
	in/=2;
    }
    int now=1;
    while(in>=2)
    {
	now+=2;
	if(!is_prime(now)) continue;
	while(in%now==0)
	{
	    printf("%d ",now);
	    in/=now;
	}
    }
    return 0;
}
