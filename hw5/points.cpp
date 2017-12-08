#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
using namespace std;
struct node
{
    double x,y;
}points[20];
double length(node a,node b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
double area(node a,node b,node c)
{
    double la=length(a,b),lb=length(b,c),lc=length(c,a);
    double p=(la+lb+lc)/2.0;
    return sqrt(p*(p-la)*(p-lb)*(p-lc));
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lf%lf",&points[i].x,&points[i].y);
    double ans=0.0;
    for(int i=2;i<=n-1;i++)
    {
	ans+=area(points[1],points[i],points[i+1]);
    }
    printf("%.2lf\n",ans);
    return 0;
}
