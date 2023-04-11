#include "stdio.h"
int main(void)
{
    const volatile int  value = 10 ;
    int *pointer = &value;
    printf("Value-->%d\n",value);
    *pointer = 20 ;
    printf("Value-->%d\n",value);
    return 0 ;
}