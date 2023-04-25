#include "stdio.h"
#include "string.h"
int main()
{
    char name[]="BARATH KUMAR S";
    int i=0;
    while(name[i]!='\0')
    {
        if(name[i]==' ')
        {
            name[i]='_';
        }
        i++;
    }
    printf("The string:%s",name);
    return 0;
}