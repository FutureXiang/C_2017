#include <string.h>
#include <stdio.h>
#include <string.h>
int cnt[30];
int main()
{
    char c;
    int i,j,H=-1;
    while(scanf("%c",&c)!=EOF)
    {
	if(c>='a'&&c<='z')
	{
	    cnt[c-'a']++;
	    if(cnt[c-'a']>H) H=cnt[c-'a'];
	}
    }
    for(i=H;i>=1;i--)
    {
	for(j=0;j<26;j++)
	{
	    if(cnt[j]>=i) printf("*");
	    else printf(" ");
	}
	printf("\n");
    }
    for(i=0;i<26;i++) printf("%c",i+'a');
    printf("\n");
    return 0;
}
