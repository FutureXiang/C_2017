#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char in[1000];
struct ch
{
    int cnt,p;
}V[300];

void add(int x,int pos)
{
    if(V[x].cnt==0) V[x].p=pos;
    V[x].cnt++;
}
int cmp(int i,int j)
{
    if(V[i].cnt==V[j].cnt)
	return V[i].p<V[j].p;
    return V[i].cnt>=V[j].cnt;
}
void swap_V(int i,int j)
{
    struct ch tmp;
    tmp=V[i];
    V[i]=V[j];
    V[j]=tmp;
}
int main()
{
    gets(in);
    int i,j,len=strlen(in);
    for(i=0;i<len;i++)
	add((int)in[i],i);
    for(i=0;i<300;i++)
    {
	for(j=i+1;j<300;j++)
	    if(!cmp(i,j)) swap_V(i,j);
    }
    int tmp=0;
    for(i=0;i<300;i++)
    {
	if(V[i].cnt==0) break;
	tmp++;
	if(tmp%4!=0) printf("%c-%d ",in[V[i].p],V[i].cnt);
	else printf("%c-%d\n",in[V[i].p],V[i].cnt);
    }
    if(tmp%4!=0) printf("\n");
    return 0;
}
