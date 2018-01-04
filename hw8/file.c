#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int n;
char tmp[102],str[102];
struct ch
{
    int pos;
    char new[102];
}S[102];

int cmp(int i,int j)
{
    if(S[i].new[0]==S[j].new[0])
	return S[i].pos<S[j].pos;
    return S[i].new[0]<S[j].new[0];
}
void swap_S(int i,int j)
{
    struct ch tmp;
    tmp=S[i];
    S[i]=S[j];
    S[j]=tmp;
}
int main()
{
    freopen("filezip.in","r",stdin);
    freopen("filezip.out","w",stdout);
    scanf("%d\n%s",&n,str);
    int i,j;
    for(i=0;i<n;i++)
    {
	strcpy(S[i].new,str+i);
	strcpy(tmp,str);
	tmp[i]='\0';
	strcat(S[i].new,tmp);
	S[i].pos=i;
    }
    for(i=0;i<n;i++)
    {
	for(j=i+1;j<n;j++)
	    if(!cmp(i,j)) swap_S(i,j);
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
	printf("%c",S[i].new[n-1]);
	if(S[i].pos==1) ans=i; // 轮换1次 首字母到尾部
    }
    printf("\n%d\n",ans+1);
    return 0;
}
