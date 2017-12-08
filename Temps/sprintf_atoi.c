#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20];
    int num=102340;
    sprintf(str,"%d",num);
    printf("integer %d to string: %s\n",num, str);

    char new_str[20]="012345";
    int new_num;
    new_num=atoi(new_str);
    printf("string %s to integer: %d\n",new_str,new_num);
    return 0;
}
