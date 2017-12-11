#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char s[110],tmp[300],out[300];
int main()
{
    int n;
    scanf("%d\n",&n);
    while(gets(s))
    {
	int i,j=0,k=0,pos=0;
	for(i=0;i<strlen(s);i++)
	{
	    if(s[i]=='\t') tmp[j++]=' ';
	    else tmp[j++]=s[i];
	}
	for(i=0;i<j;i++)
	{
	    if(i>=1&&tmp[i]==' '&&tmp[i-1]==' ') continue;
	    else out[k++]=tmp[i];
	}
	while(out[k-1]==' ')k--;
	j=0;
	for(i=0;i<k;i++)
	{
	    tmp[j++]=out[i];
	    if(out[i+1]==':'&&out[i]!=' ') tmp[j++]=' ';
	    if(out[i]==':'&&out[i+1]!=' ') tmp[j++]=' ';
	}
	tmp[j]='\0';
	for(i=0;i<strlen(tmp);i++)
	{
	    if(tmp[i]==':')
	    {
		pos=i;
		break;
	    }
	}
	for(i=1;i<=n-(pos+1);i++) printf(" ");
	printf("%s\n",tmp);
    }
    return 0;
}
