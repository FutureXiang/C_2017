#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max(int x,int y)
{
    if(x>=y) return x;
    return y;
}
int min(int x,int y)
{
    if(x<=y) return x;
    return y;
}
int main()
{
    int n,i,mmax=-1,mmin=2147483647,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	scanf("%d",&x);
	mmax=max(mmax,x);
	mmin=min(mmin,x);
    }
    printf("%d %d",mmax,mmin);
    return 0;
}
