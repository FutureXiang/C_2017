#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char in_ch[10],rev_ch[10];
int is_prime(int x)
{
    if(x==1) return 0;
    if(x==2) return 1;
    int i;
    for(i=2;i<=sqrt(x*1.0)+1;i++)
    {
	if(x%i==0) return 0;
    }
    return 1;
}

int main()
{
    int in,i;
    scanf("%d",&in);
    int rev;
    sprintf(in_ch,"%d",in);
    for(i=0;i<strlen(in_ch);i++)
	rev_ch[strlen(in_ch)-i-1]=in_ch[i];
    rev=atoi(rev_ch);
    if(is_prime(rev)&&is_prime(in)) printf("yes\n");
    else printf("no\n");
    return 0;
}
