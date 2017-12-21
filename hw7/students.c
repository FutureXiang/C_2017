#include <string.h>
#include <stdlib.h>
#include <stdio.h>
struct student
{
    char name[6];
    int age,id;
};
struct student a[55];
int n;
int cmp_1(int i,int j)
{
    if(strcmp(a[i].name,a[j].name)<0) return 0;
    else return 1;
}
int cmp_2(int i,int j)
{
    if(a[i].age==a[j].age)
    {
	if(strcmp(a[i].name,a[j].name)<0) return 0;
	else return 1;
    }
    else
	return a[i].age>a[j].age;
}
int main()
{
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++) scanf("%d %s %d",&a[i].id,a[i].name,&a[i].age);
    for(i=1;i<=n;i++)
    {
	for(j=i+1;j<=n;j++)
	{
	    if(cmp_1(i,j))
	    {
		struct student tmp;
		tmp=a[i];a[i]=a[j];a[j]=tmp;
	    }
	}
    }
    for(i=1;i<=n;i++)
	printf("%3d%6s%3d\n",a[i].id,a[i].name,a[i].age);
    printf("\n");
    for(i=1;i<=n;i++)
    {
	for(j=i+1;j<=n;j++)
	{
	    if(cmp_2(i,j))
	    {
		struct student tmp;
		tmp=a[i];a[i]=a[j];a[j]=tmp;
	    }
	}
    }
    for(i=1;i<=n;i++)
	printf("%3d%6s%3d\n",a[i].id,a[i].name,a[i].age);

    return 0;
}
