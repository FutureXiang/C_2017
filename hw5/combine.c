#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[300],n;
int main()
{
    char c;
    int i,j;
    while(scanf("%c",&c)!=EOF)
	if(c!='\n') a[++n]=c-'a';
    for(i=1;i<n;i++)
    {
	for(j=i+1;j<=n;j++)
	{
	    if(a[i]>a[j])
	    {
		int t;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	    }
	}
    }
    for(i=1;i<=n;i++) printf("%c",a[i]+'a');
    printf("\n");
    return 0;
}
