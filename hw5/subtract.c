#include <string.h>
#include <stdio.h>
#include <string.h>
int a[100],b[100];
char ca[100],cb[100];
int main()
{
    int i,j,m,n;
    scanf("%s",ca);
    scanf("%s",cb);
    m=strlen(ca);
    for(i=0;i<m;i++) a[m-i]=ca[i]-'0';
    n=strlen(cb);
    for(i=0;i<n;i++) b[n-i]=cb[i]-'0';

    char bigger='e';
    if(m>n) bigger='a';
    else if(m<n) bigger='b';
    else
    {
	int k;
	for(k=90;k>=1;k--)
	{
	    if(a[k]<b[k])
	    {
		bigger='b';
		break;
	    }
	}
    }
    if(bigger=='a')
    {
	int sub=0;
	for(i=1;i<=90;i++)
	{
	    a[i]-=b[i]+sub;
	    sub=0;
	    if(a[i]<0)
	    {
		a[i]+=10;
		sub=1;
	    }
	}
	i=90;
	while(a[i]==0) i--;
	for(;i>=1;i--) printf("%d",a[i]);
    }
    else if(bigger=='b')
    {
	int sub=0;
	for(i=1;i<=90;i++)
	{
	    b[i]-=a[i]+sub;
	    sub=0;
	    if(b[i]<0)
	    {
		b[i]+=10;
		sub=1;
	    }
	}
	printf("-");
	i=90;
	while(b[i]==0) i--;
	for(;i>=1;i--) printf("%d",b[i]);
    }
    else printf("0\n");
    return 0;
}
