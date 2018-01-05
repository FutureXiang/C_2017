#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct wordS
{
    char str[102];
    struct wordS *nxt;
    struct pos *tail,*next; // tail: from behind
}E[100005];
struct vertex
{
    struct wordS *nxt;
}V; // 单词链表

struct pos
{
    int x,y;
    struct pos *next;
}P[100005]; // 位置链表

int numE,numP,row;
char in[10004];

void add_pos(struct wordS *p,int x, int y)
{
    struct pos *q=&P[++numP];
    q->x=x; q->y=y;
    if(p->next==0) p->next = p->tail = q;
    else
    {
	p->tail->next=q;
	p->tail=q;
    }
}
void add_word(struct wordS *p)
{
    struct wordS *i=V.nxt;
    while(i->nxt && strcmp(i->nxt->str,p->str)<0) i=i->nxt;
    p->nxt=i->nxt;
    i->nxt=p;
}
void process_word(char *tmp, int x,int y)
{
    int exist=0;
    struct wordS *p;
    for(p=V.nxt;p;p=p->nxt)
    {
	if(strcmp(tmp,p->str)==0)
	{
	    exist=1;
	    add_pos(p,x,y); // from behind.
	    break;
	}
    }
    if(!exist)
    {
	struct wordS *q=&E[++numE];
	strcpy(q->str,tmp);
	add_pos(q,x,y);
	add_word(q);	
    }
}
int check_char(char x)
{
    if((ispunct(x)||isspace(x))&&(x!='-')) return 0;
    if(isdigit(x)) return 0;
    return 1;
}

int main()
{
    freopen("crossin.txt","r",stdin);
    freopen("crossout.txt","w",stdout);
    struct wordS *head=&E[++numE];
    strcpy(head->str,"A");
    V.nxt=head;

    while(gets(in))
    {
	int j;
	for(j=0;j<strlen(in);j++)
	{
	    int end=j,k;
	    if(!check_char(in[j])||in[j]=='-') continue;
	    while(check_char(in[end+1])&&(end+1)<strlen(in)) end++;
	    // [j,end]
	    char tmp[1003];
	    for(k=j;k<=end;k++)
		tmp[k-j]=in[k];
	    tmp[end-j+1]='\0';
	    if(strcmp(tmp,"a")==0||strcmp(tmp,"an")==0||strcmp(tmp,"the")==0||strcmp(tmp,"and")==0)
	    {
		j=end;
		continue;
	    }
	    process_word(tmp,row,j);
	    j=end;
	}
	row++;
    }
    struct wordS *p; 
    for(p=V.nxt;p;p=p->nxt)
    {
	if(strcmp(p->str,"A")==0) continue;
	printf("%s",p->str);
	struct pos *q = p->next;
	printf(":(%d,%d)",q->x+1,q->y+1);
	for(q=q->next;q;q=q->next)
	    printf(",(%d,%d)",q->x+1,q->y+1);
	printf("\n");
    }
    return 0;
}
