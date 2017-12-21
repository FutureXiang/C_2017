#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct edge
{
    int pow,a;
    struct edge *next;
}E[10004];
struct head
{
    struct edge *next;
}V[4];
int num;
void add(int x,int y,int tag) // from the front
{
    struct edge *p=&E[++num];
    p->a=x;
    p->pow=y;
    p->next=V[tag].next;
    V[tag].next=p;
}
void insert(int x,int y) // keep pow decreasing
{
    struct edge *p=V[3].next,*q=&E[++num];
    while(p&&(p->next)&&(p->next)->pow>=y) p=p->next; //3: L 6 5 4 3* 2 1
    if(p->pow==y) // already exists
    {
	p->a+=x;
	return; 
    }
    q->a=x;
    q->pow=y;
    q->next=p->next;
    p->next=q;
    return;
}
int main()
{
    int x,y;
    char c;
    while(1)
    {
	scanf("%d %d",&x,&y);
	scanf("%c",&c);
	add(x,y,1);
	if(c=='\n') break;
    }
    while(1)
    {
	scanf("%d %d",&x,&y);
	scanf("%c",&c);
	add(x,y,2);
	if(c=='\n') break;
    }
    
    add(-1,-1,3); // add LEFT NODE !!! (when adding at the front)

    struct edge *p, *q;
    for(p=V[1].next;p;p=p->next)
    {
	for(q=V[2].next;q;q=q->next)
	{
	    int a1=p->a,a2=q->a,n1=p->pow,n2=q->pow;
	    insert(a1*a2,n1+n2);
	}
    }

    for(p=V[3].next;p;p=p->next)
	if(p->a!=0&&(p->a!=-1&&p->pow!=-1)) printf("%d %d ",p->a,p->pow);

    return 0;
}
