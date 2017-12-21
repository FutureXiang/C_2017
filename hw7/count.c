#include <stdio.h>
#include <stdlib.h>
int n;
struct in
{
    int value,no;
};
int b[10004];
struct in a[10004];
void q_sort(int al,int ar)
{
    int l=al,r=ar;
    int mid=a[(al+ar)/2].value;
    while(l<=r)
    {
	while(a[l].value<mid) l++;
	while(a[r].value>mid) r--;
	if(l<=r)
	{
	    struct in tmp; tmp=a[l]; a[l]=a[r]; a[r]=tmp;
	    l++;
	    r--;
	}
    }
    if(al<r) q_sort(al,r);
    if(ar>l) q_sort(l,ar);
}

void init()
{
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
	scanf("%d",&b[i]);
	a[i].value=b[i];
	a[i].no=i;
    }
}
int max(int x,int y)
{
    return x>y?x:y;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int i,j;
    int pos=~0u>>1,maxx=-1;
    init();
    q_sort(1,n);
    for(i=1;i<=n;i++)
    {
	j=i;
	while(a[j].value==a[i].value) j++;
	j--;
	maxx=max(maxx,j-i+1);
	i=j;
    }
    for(i=1;i<=n;i++)
    {
	j=i;
	int min_pos=~0u>>1;
	while(a[j].value==a[i].value)
	{
	    min_pos=min(min_pos,a[j].no);
	    j++;
	}
	j--;
	if(maxx==j-i+1)
	    pos=min(pos,min_pos);
	i=j;
    }
    printf("%d\n",b[pos]);
    return 0;
}
