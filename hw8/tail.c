#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int lines=10,row;
char tmp[10];
char file[100];
char storage[200][100];
int main(int argc,char **argv)
{
    if(argc==3)
    {
	strcpy(file,argv[2]);
	strcpy(tmp,argv[1]+1); // skip '-' !!
	lines=atoi(tmp);
    }
    else if(argc==2)
	strcpy(file,argv[1]);

    freopen(file,"r",stdin);
    while(gets(storage[row++]));
    row--; //EOF. 0~row-1 !!!
    int i;
    for(i=row-1-lines+1;i<row;i++)
	printf("%s\n",storage[i]);
    return 0;
}
