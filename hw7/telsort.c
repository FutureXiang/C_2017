#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int n;
struct tel
{
    char name[15],num[15];
};
struct tel a[50];
char str1[1000],str2[1000];
int cmp(int i,int j)
{
    if(strcmp(a[i].name,a[j].name)<0) return 0;
    else return 1;
}
int main()
{
    scanf("%d",&n);
    int i,j;
    
    for(i=1;i<=n;i++)
    {
	scanf("%s %s",str1,str2);
	if(strlen(str1)>10) str1[10]='\0';
	if(strlen(str2)>10) str2[10]='\0';
	strcpy(a[i].name,str1);
	strcpy(a[i].num,str2);
    }

    for(i=1;i<=n;i++)
    {
	for(j=i+1;j<=n;j++)
	{
	    if(cmp(i,j))
	    {
		struct tel tmp;
		tmp=a[i]; a[i]=a[j]; a[j]=tmp;
	    }
	}
    }
    for(i=1;i<=n;i++)
	printf("%12s%12s\n",a[i].name,a[i].num);

    return 0;
}
