#include "stdio.h"
 int var = 1;
 int main()
{
    auto int first_var = 10;
    {
        auto int first_var=15;
        printf("The block scope value:%d\n",first_var);
    }
    printf("The function scope :%d",first_var);
    return 0 ;
}