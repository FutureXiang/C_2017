#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    freopen("fcopy.in","r",stdin);
    freopen("fcopy.out","w",stdout);
    char in[500];
    char ch;
    while(scanf("%s",in)!=EOF)
    {
	printf("%s",in);
	scanf("%c",&ch);
	if(ch!='\n') printf(" ");
	else printf("\n");
    }
    return 0;
}
