#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int mat[2][11][11];
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
	for(j=1;j<=N;j++)
	    scanf("%d",&mat[0][i][j]);
    }
    char op;
    while(scanf("%c",&op)!=EOF)
    {
	if(op=='#') break;
	if(op==' '||op=='\n') continue;
	for(i=1;i<=N;i++)
	{
	    for(j=1;j<=N;j++)
	    {
		scanf("%d",&mat[1][i][j]);
		if(op=='-') mat[0][i][j]-=mat[1][i][j];
		else mat[0][i][j]+=mat[1][i][j];
	    }
	}	
    }
    for(i=1;i<=N;i++)
    {
	for(j=1;j<=N;j++)
	    printf("%5d",mat[0][i][j]);
	printf("\n");
    }
    return 0;
}
