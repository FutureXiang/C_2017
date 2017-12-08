#include <stdio.h>
#include <string.h>
char in[5000],ch;
int main()
{
    freopen("filein.c","r",stdin);
    int len=0,mark=0,cnt=0;
    while(scanf("%c",&ch)!=EOF)
    {
	in[len++]=ch;
	if(!mark&&ch=='*'&&in[len-2]=='/')
	{
	    mark=1;
	    in[len-2]=in[len-1]='!';
	    //printf("%c, %d, %d, %d\n",ch,cnt,len,mark);
	    continue;
	}
	if(mark&&ch=='/'&&in[len-2]=='*')
	{
	    mark=0;
	    cnt--;
	    in[len-2]=in[len-1]='!';
	}
	if(mark) cnt++;
	//printf("%c, %d, %d, %d\n",ch,cnt,len,mark);
    }
    len--; // for auto-added '\n' at the end of file.
    printf("debug info:%d %d\n",cnt,len);//???????180?
    printf("%d\%\n",cnt*100/len);
    return 0;
}
