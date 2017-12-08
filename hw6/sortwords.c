#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct trie
{
    int next[26];
    int end;
}Tree[100005];
char in[100];
char out[100];
int num=1;

void insert()
{
    int i,now=1;
    for(i=0;i<strlen(in);i++)
    {
	int ch=in[i]-'a';
	if(Tree[now].next[ch]==0) Tree[now].next[ch]=++num;
	now=Tree[now].next[ch];
    }
    Tree[now].end=1;
}
void dfs(int now,int pos)
{
    if(Tree[now].end==1)
    {
	int i;
	for(i=0;i<pos;i++) printf("%c",out[i]);
	printf(" ");
    }
    int i;
    for(i=0;i<26;i++)
    {
	if(!Tree[now].next[i]) continue;
	out[pos]=i+'a';
	dfs(Tree[now].next[i],pos+1);
    }
}
int main(int argc, char **argv)
{
    freopen(argv[1],"r",stdin);
    freopen(argv[2],"w",stdout);
    while(scanf("%s",in)!=EOF)
	insert();
    dfs(1,0);
    return 0;
}
