#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char in[102];
int main()
{
    scanf("%s",in);
    int point=0;
    int i,j;
    if(in[0]=='-')
    {
	for(i=0;i<=strlen(in)-2;i++)
	    in[i]=in[i+1];
	in[i]='\0';
	printf("-");
    }

    for(i=0;i<strlen(in);i++)
    {
    	if(in[i]=='.')
	{
	    point=i;
	    break;
	}
    }
    int positive=0;
    for(i=0;i<strlen(in);i++)
    {
	if(in[i]>'0')
	{
	    positive=i;
	    break;
	}
    }
    if(positive+1==point) //8.9 = 8.9e0
    {
	printf("%se0\n",in);
	return 0;
    }
    if(positive!=strlen(in)-1)printf("%c.",in[positive]); //0.012 = 1.2e-2, 82.92 = 8.292e1
    else printf("%c",in[positive]); //0.01 = 1e-2
    for(i=positive+1;i<strlen(in);i++)
	if(in[i]!='.') printf("%c",in[i]);
    printf("e%d\n",point>positive?point-positive-1:point-positive);
    return 0;
}
