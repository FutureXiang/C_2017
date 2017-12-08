#include <string.h>
#include<stdio.h>
void main()
{
    char a[7]="abcdef",b[4]="ABC";
    strcpy(a,b);
    printf("%s\n",a);
    printf("%c %c %c\n",a[3],a[4],a[5]);
}
