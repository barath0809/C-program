#include "stdio.h"
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int num_1=12,num_2=13;
    int (*pointer_add)(int,int);
    pointer_add = add;
    printf("The answer from function pointer:%d\n",pointer_add(num_1,num_2));
        printf("The answer from normal funtion:%d",add(num_1,num_2));

    return 0;
}