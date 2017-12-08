#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;
char d[40]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ans[1000];
int len=0;
void itob(int n,int b)
{
    if(n<0) n=-n;
    while(n>0)
    {
	int t=n%b;
	ans[len++]=d[t];
	n/=b;
    }
}
int main()
{
    int n,b;
    cin>>n>>b;
    itob(n,b);
    if(n<0) cout<<'-';
    for(int i=0;i<len;i++) cout<<ans[len-i-1];
    cout<<endl;
    return 0;
}
