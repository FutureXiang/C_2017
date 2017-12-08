#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in, *out;
    in = fopen("xxxx.in","r"); // for reading
    out = fopen("xxxx.out","w"); // for writing
    if(in==NULL||out==NULL) return 0; // if it doesn't exist
    char s[10];
    fscanf(in,"%s",s);
    fprintf(out,"In xxxx.in:\n%s\n",s);
    fclose(in);
    fclose(out);
    return 0;
}
