#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int n;
int mat[10][10];
int main()
{
    freopen("file.out","w",stdout);
    scanf("%d",&n);
    int i,j,now=n,len,now_d1=1,now_d2=n;
    int dir=1; //1:down&left, 0:up&right
    for(i=1;i<=n;i++) mat[1][i]=i;
    for(len=n-1;len>=1;len--)
    {
	if(dir)
	{
	    for(j=now_d1+1;j<=now_d1+len&&now<n*n;j++)
		mat[j][now_d2]=++now;
	    if(now==n*n) break;
	    now_d1+=len;
	    for(j=now_d2-1;j>=now_d2-len&&now<n*n;j--)
		mat[now_d1][j]=++now;
	    if(now==n*n) break;
	    now_d2-=len;
	    dir=0;
	}
	else
	{
	    for(j=now_d1-1;j>=now_d1-len&&now<n*n;j--)
		mat[j][now_d2]=++now;
	    if(now==n*n) break;
	    now_d1-=len;
	    for(j=now_d2+1;j<=now_d2+len&&now<n*n;j++)
		mat[now_d1][j]=++now;
	    if(now==n*n) break;
	    now_d2+=len;
	    dir=1;
	}
    }
    for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)
	    printf("%5d",mat[i][j]);
	printf("\n");
    }
    return 0;
}
