#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,ans=0,flag=0;
    for(i=1;i<=9&&flag==0;i++)
    {
	for(j=i+1;j<=9;j++)
	{
	    int now=i*10+j;
	    int rev=i+j*10;
	    if(now*rev==n)
	    {
		flag=1;
		ans=now;
		break;
	    }
	}
    }
    if(ans) printf("%d\n",ans);
    else printf("No Answer\n");
    return 0;
}
