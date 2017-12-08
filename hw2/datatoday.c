#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int y,m,d,ans;
    scanf("%d%d%d",&y,&m,&d);
    ans=d;
    if(y%400==0||(y%100!=0&&y%4==0)) days[2]=29;
    int i;
    for(i=1;i<m;i++)
        ans+=days[i];
    printf("%d\n",ans);
    return 0;
}
