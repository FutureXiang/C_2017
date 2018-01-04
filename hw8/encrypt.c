#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char key[80],tmpc;
char map[26];//a-z
int cnt_key[26];
int already_in[26];
void process()
{
    int i,j=0;
    for(i=0;i<strlen(key);i++)
	cnt_key[key[i]-'a']++;
    for(i=0;i<strlen(key);i++)
    {
	int now=key[i]-'a';
	if(cnt_key[now]>0 && already_in[now]==0)
	{
	    already_in[now]=1;
	    map[j++]=key[i];
	}
    }
    for(i=25;i>=0;i--)
    {
	if(already_in[i]==0)
	    map[j++]=i+'a';
    }
    map[j]='\0';
}

char find(char x)
{
    if(islower(x))
	return map[x-'a'];
    else return x;
}

int main()
{
    scanf("%s",key);
    process();
    
    freopen("encrypt.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(scanf("%c",&tmpc)!=EOF)
	printf("%c",find(tmpc));
    return 0;
}
