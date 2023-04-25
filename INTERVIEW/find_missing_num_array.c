#include "stdio.h"
void missing_element(int array[],int size)
{
   int temp_array[size+1];
   for(int i=0;i<=size;i++)
   {
      temp_array[i]=0;
   }
   for(int i=0;i<size;i++)
   {
    temp_array[array[i]-1]=1;
   }
   printf("The missing values:");
   for(int i=0;i<size;i++)
   {
     if(temp_array[i]==0)
     {
        printf("\n%d",i+1);
     }
   }
}
int main()
{
    int linear_array[8]={2,3,6},size_of_array;
    size_of_array = sizeof(linear_array)/sizeof(linear_array[0]);
    missing_element(linear_array,size_of_array);
    return 0; 
}