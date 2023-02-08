/* 
1.The auto is one of the storage class ,also called for automatic .
2.The intially all the variable automatically define auto.
3.Only intialise to inside the block scope and function scope only,
  we cann't declare as globally.
4.'auto' is keyword,it also intially hold the garbage value.
*/
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