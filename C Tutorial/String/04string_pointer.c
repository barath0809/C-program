#include "stdio.h"
int main()
{
    char *string_pointer[4]={
        "Hello",
        "World",
        "Hi",
        "Barath" 
    };

    for(int i=0;i<4;i++)
    {
        int row = 0;
        while(*(string_pointer[i]+row)!='\0')
        {
            printf("%c",*(string_pointer[i]+row));
            row++;
        }   
        printf("\n");   
    }
}