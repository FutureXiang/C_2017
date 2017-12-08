#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,m,i;
    double S=0;
    scanf("%d%d",&n,&m);
    S=n;
    for(i=2;i<=m;i++)
    {
	S+=pow(0.25,i-1)*2*n;
    }
    printf("%.2lf\n%.2lf\n",S,pow(0.25,m*1.0)*n);
    return 0;
}
