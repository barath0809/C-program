/*
1.The Register is one of the storage class.
2.'register' is keyb word.
3.This keyword is improve the speed of the process because directly store the register.
4.Similar with Automatic so it's also only valid in function,block inside only avlaible ,
  we cann't declare in globaly.
5.It has hold for Default value is garbage value only.
6.We cann't use to declare pointer variable but to declarer as intially pointer decalaration 
  and assign nomal variable.
*/
#include "stdio.h"
int main()
{
    int ptr_regis = 100;
    register int *var=&ptr_regis;
    {
        register int var = 2;
        printf("Inside the block:%d\n",var);
    }
    printf("The function scope:%d",*var);
    return 0;
}