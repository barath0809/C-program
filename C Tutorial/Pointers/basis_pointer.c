#include "stdio.h"
int main()
{
    int pointer_variable = 10;
    int *pointer_assign = &pointer_variable;
    printf("Normal_value:%d\n",pointer_variable);
    printf("Pointer_value:%d",*pointer_assign);
    return 0;
}