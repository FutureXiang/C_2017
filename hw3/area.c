#include <stdio.h>
#include <math.h>
int max(int x,int y)
{return x>y?x:y;}
int min(int x,int y)
{return x<y?x:y;}
int main()
{
    int ax1,ay1,ax2,ay2,bx1,by1,bx2,by2;
    scanf("%d%d%d%d%d%d%d%d",&ax1,&ay1,&ax2,&ay2,&bx1,&by1,&bx2,&by2);
    int max_ax,min_ax,max_bx,min_bx;
    max_ax=max(ax1,ax2);
    min_ax=min(ax1,ax2);
    max_bx=max(bx1,bx2);
    min_bx=min(bx1,bx2);
    int X=min(max_ax,max_bx)-max(min_ax,min_bx);
    X=max(0,X);
    int max_ay,min_ay,max_by,min_by;
    max_ay=max(ay1,ay2);
    min_ay=min(ay1,ay2);
    max_by=max(by1,by2);
    min_by=min(by1,by2);
    int Y=min(max_ay,max_by)-max(min_ay,min_by);
    Y=max(0,Y);
    printf("%d\n",X*Y);
    return 0;
}
