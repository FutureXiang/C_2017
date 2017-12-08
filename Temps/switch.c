#include <stdio.h>
int main()
{
    int i=1;
    switch(i)
    {
    case 1:  printf("%d",i++); //without break?!
    case 2:  printf("%d",i++);
    case 3:  printf("%d",i++);
    case 4:  printf("%d",i++);
    break;
    default:  printf("END");
    }
    //output: 1234
    return 0;
}
