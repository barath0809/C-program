#include <stdio.h>
int main()
{
    int k = 101;
    for(int bit=0;bit<=4;bit++)
    {
        if(k&(1<<bit))
          printf("The bit %d value:%d\n",bit,1);
        else
          printf("The bit %d value:%d\n",bit,0);
    }
    return 0;
}