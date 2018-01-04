#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char in[1000][1000];
struct ch
{
    int x,y;
    char v[100];
}str[10000];
int row,num;

int check(int x,int y)
{
    int j,cntl=0;
    for(j=0;j<y;j++) //(x,0) ~ (x,y-1)
	cntl+=(in[x][j]=='"');
    return cntl%2==0;
}

int main()
{
    freopen("in.c","r",stdin);
    while(gets(in[row++]));
    int i,j;
    int string=0;
    for(i=0;i<row;i++)
    {
	for(j=0;j<strlen(in[i]);j++)
	{
	    int end=j,k;
	    if(!(isalpha(in[i][j])||isdigit(in[i][j]))) continue;
	    while(isalpha(in[i][end+1])||isdigit(in[i][end+1])) end++; // j~end
	    num++;
	    for(k=j;k<=end;k++)
		str[num].v[k-j]=in[i][k];
	    str[num].v[end-j+1]='\0';
	    str[num].x=i;
	    str[num].y=j;
	    j=end;
	}
    }
    for(i=1;i<=num;i++)
    {
	int flag=0;
	if(strcmp(str[i].v,"for")==0) flag=1;
	else if(strcmp(str[i].v,"while")==0) flag=1;
	else if(strcmp(str[i].v,"if")==0) flag=1;
	if(!flag) continue;
	if(!check(str[i].x,str[i].y)) continue;
	printf("%s:%d,%d\n",str[i].v,str[i].x+1,str[i].y+1);
    }
    return 0;
}
