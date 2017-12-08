#include <stdio.h>
#include <string.h>
#include <string.h>
int n;
int a[11];
int v[11];
void per(int pos)
{
    int i;
    if(pos==n+1)
    {
	for(i=1;i<=n;i++) printf("%d ",a[i]);
	printf("\n");
	return;
    }
    for(i=1;i<=n;i++)
    {
	if(!v[i])
	{
	    v[i]=1;
	    a[pos]=i;
	    per(pos+1);
	    v[i]=0;
	}
    }
}
int main()
{
    scanf("%d",&n);
    per(1);
    return 0;
}
