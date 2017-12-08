#include <stdio.h>
#include <math.h>
int main()
{
    double e;
    scanf("%lf",&e);
    double pi=1.0,delta=1;
    int n;
    for(n=2;delta*2>=e||n==2;n++)
    {
	delta=delta/(2*n-1)*(n-1);
	pi+=delta;
    }
    printf("%d %.7lf\n",n-1,pi*2);
    return 0;
}
