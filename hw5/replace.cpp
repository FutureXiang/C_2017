#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;
char file[10000];
char ori[100],rep[100];
int main()
{
    FILE *in,*out;
    in=fopen("filein.txt","r");
    out=fopen("fileout.txt","w");
    int len=0,i,j,k;
    char ch;
    while(fscanf(in,"%c",&ch)!=EOF) file[len++]=ch;
    scanf("%s%s",ori,rep);

    for(i=0;i<len;i++)
    {
	for(j=0;j<strlen(ori);j++)
	{
	    if(tolower(file[i+j])!=tolower(ori[j])) break;
	}
	if(j!=strlen(ori)) fprintf(out,"%c",file[i]);
	else
	{
	    i+=j-1;
	    fprintf(out,"%s",rep);
	}
    }
    fclose(in);
    fclose(out);
    return 0;
}
