#include "stdio.h" 
int add(int a,int b)
{
    int total;
    return total = a + b;
    
}
int main()
{
   int num_1=5,num_2=4;
   int(*pointer_add)(int,int);
   pointer_add = &add;
   printf("Sum_of_Value:%d",(*pointer_add)(num_1,num_2));
   return 0;
}