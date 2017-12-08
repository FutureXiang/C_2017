#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double s,S;
    s=(a+b+c)/2.0;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.3lf\n",S);
    return 0;
}
