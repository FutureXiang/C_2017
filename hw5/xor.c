#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[200],n;
int main()
{
    while(scanf("%d",&a[++n])!=EOF);
    n--;
    int i,j;
    for(i=1;i<n;i++)
    {
	for(j=i+1;j<=n;j++)
	{
	    if(a[i]<a[j])
	    {
		int t;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	    }
	}
    }
    //for(i=1;i<=n;i++) printf("%d ",a[i]);
    for(i=1;i<=n;i++)
    {
	if(i!=n&&a[i]==a[i+1])
	{
	    while(a[i]==a[i+1]) i++;
	    continue;
	}
	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
