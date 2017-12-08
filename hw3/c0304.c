#include <stdio.h>
#include <math.h>
int main()
{
    int x,i,j,num;
    scanf("%d",&x);
    for(num=x;num>=2;num--)
    {
	if((num%2==1&&x%num==0)||(x%num==num/2&&num%2==0))
	{
	    if(num%2==1 && x/num >= num/2+1)
	    {
		printf("%d=",x);
		for(i=x/num-num/2;i<=x/num+num/2;i++)
		{
		    printf("%d",i);
		    if(i<x/num+num/2)
			printf("+");
		}
		return 0;
	    }
	    if(num%2==0 && x/num >=num/2)
	    {
		printf("%d=",x);
		for(i=x/num-num/2+1;i<=x/num+num/2;i++)
		{
		    printf("%d",i);
		    if(i<x/num+num/2)
			printf("+");
		}
		return 0;
	    }
	}
    }
    printf("No Answer\n");
    return 0;
}
