#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char a[100005],b[10004];
int la,lb;
int next[10004];
int appear[100005]; // "bool"
int main()
{
    gets(a);
    gets(b);
    la=strlen(a);
    lb=strlen(b);
    
    int i,j=0;
    for(i=1;i<lb;i++) // preprocess "next array": for shifting string b
    {
	while(j>0&&b[i]!=b[j]) j=next[j-1]; // j-1!
	if(b[i]==b[j]) j++;
	next[i]=j;
    }

    j=0; // updating j
    int cnt=0;
    for(i=0;i<la;i++)
    {
	while(j>0&&a[i]!=b[j]) j=next[j-1]; // j-1! (restore j->j-1->next[j-1])
	if(a[i]==b[j])j++;
	if(j==lb)
	{
	    //printf("start with %d\n",i-lb+1);
	    appear[i-lb+1]=1;
	    j=next[j-1]; // j-1!
	}
    }
    //printf("%d\n",cnt);
    for(i=0;i<la;i++)
    {
	if(!appear[i]) printf("%c",a[i]);
	else
	    i+=lb-1;
    }
    printf("\n");
    return 0;
}
