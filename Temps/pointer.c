#include <stdio.h>
#include <string.h>

int main()
{
    int a[5]={5,6,7,8,9},*p[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
    int i;
    for(i=0;i<=4;i++)
    {
	printf("%d %d %d \n",a[i],p[i],*p[i]);
    }
    return 0;
}
