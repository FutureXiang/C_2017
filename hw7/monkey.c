#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int f[1003];
int n,m,q;
int check()
{
    int i,cnt=0,flag=-1;
    for(i=1;i<=n;i++)
    {
	cnt+=f[i];
	if(f[i]) flag=i;
    }
    if(cnt==1) return flag;
    else return 0;
}
int find_next(int x)
{
    while(++x)
    {
	if(x==n+1) x=1;
	if(f[x]) return x;
    }
}
int main()
{
    scanf("%d%d%d",&n,&m,&q);
    int i,j,ck;
    for(i=1;i<=n;i++) f[i]=1;
    q=(q==1)?n:q-1;
    while(1)
    {
	if(ck=check())
	{
	    printf("%d\n",ck);
	    return 0;
	}
	for(j=1;j<=m;j++) q=find_next(q);
	f[q]=0;
    }
    return 0;
}
