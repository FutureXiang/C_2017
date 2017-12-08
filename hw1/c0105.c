#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a,b,c,d;
    a=x/10;
    x%=10;
    b=x/5;
    x%=5;
    c=x/2;
    x%=2;
    d=x;
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}
