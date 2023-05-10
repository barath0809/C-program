#include "stdio.h"
#include <string.h>
void remove_function(char *pointer)
{
    int j ,i;
    for(i=j=0;i<strlen(pointer);i++)
    {
        if(pointer[i]!='l')
        {
            pointer[j++]=pointer[i];
        }    
    }
     pointer[j]='\0';    
}
int main()
{
    char str[]="hiljkl";
    remove_function(str);
     printf("%s",str);
    return 0;
}