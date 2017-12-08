#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char in[1000];
void expand()
{
    int i=0,j=0;
    while(in[i]!='\0')
    {
	printf("%c",in[i]);
	if(in[i+1]=='-'&&in[i+2]>in[i])
	{
	    for(j=in[i]+1;j<in[i+2];j++)
		printf("%c",j);
	    i+=2;
	}
	else i++;
    }
    printf("\n");
}
int main()
{
    gets(in);
    expand();
    return 0;
}
