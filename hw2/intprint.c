#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d",&x);
    char s[6];
    sprintf(s,"%d",x);
    printf("%d\n",strlen(s));
    printf("%s\n",s);
    int i;
    for(i=strlen(s)-1;i>=0;i--)
	printf("%c",s[i]);
    printf("\n");
    return 0;
}
