#include <stdio.h>
int a[100],b[100],la,lb;
int main()
{
    int tmp;
    while(1)
    {
	scanf("%d",&tmp);
	if(tmp==-1) break;
	a[++la]=tmp;
    }
    while(1)
    {
	scanf("%d",&tmp);
	if(tmp==-1) break;
	b[++lb]=tmp;
    }
    int i,j;
    for(i=1;i<=la;i++)
    {
	int flag=0;
	for(j=1;j<=lb;j++)
	{
	    if(a[i]==b[j])
	    {
		flag=1;
		break;
	    }
	}
	if(!flag) printf("%d ",a[i]);
    }
    return 0;
}
