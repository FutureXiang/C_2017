#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[100],tmp;
char dic[15][100];
int num;

int find()
{
    int i;
    for(i=0;i<num;i++)
	if(strcmp(str,dic[i])==0) return 1;
    return 0;
}

int main()
{
    freopen("input.c","r",stdin);
    freopen("output.c","w",stdout);
    while(scanf("%s",str)!=EOF)
    { 
	if(scanf("%c",&tmp)==EOF) break;
	if(strcmp(str,"int")==0)
	{
	    printf("%s",str);
	    while(scanf("%s",str))
	    {
		getchar();
		if(str[0]==','||str[0]==';')
		    printf("%c",str[0]);
		else
		    strcpy(dic[num++],str);
		if(str[0]==';') break;
	    }
	}
	else
	    if(!find()) printf("%s",str);
    }
    printf("\n");
    return 0;
}
