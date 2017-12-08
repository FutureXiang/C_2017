#include <stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    if(c>=100&&c<=999) printf("%d\n",c/100+(c/10)%10*10+c%10*100);
    else printf("-1");
    return 0;
}
