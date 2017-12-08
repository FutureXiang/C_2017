#include <string.h>
#include <stdio.h>
char s[250];
int main()
{
    int n;
    scanf("%s%d",s,&n);
    int i,j,cnt=0;
    while(cnt<n)
    {
	
	for(i=0;i<=strlen(s)-1;i++)
	{
	    if(s[i]>s[i+1])
	    {
		cnt++;
		break;
	    }
	}
	int t=strlen(s);
	for(j=i+1;j<=strlen(s)-1;j++)
	    s[j-1]=s[j];
	s[t-1]='\0';
	//printf("%s\n",s);
    }
    printf("%s\n",s);
    return 0;
}
