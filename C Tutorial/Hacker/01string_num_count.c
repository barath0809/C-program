#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *k,num='0';
    int count = 0;
    k = malloc(1024*sizeof(char));
    scanf("%[^\n]",k);  
    k = realloc(k,strlen(k)+1);
    
    for(int loo=0;loo<10;loo++)
    {
        for(int i=0;i<strlen(k);i++)
    {
        if(k[i]==num)
        {
            count++;
        }
    }
     printf("%d ",count);
     count=0;
     num++;
    }
    
    return 0;
}
