#include "stdio.h"
void swap_array(int [],int);
int main()
{
    int array[] ={1,2,3,4,5,6,7,8,9,10};
    int length=10,i;
      swap_array(array,length);
      for(i=0;i<length;i++)
       printf("array[%d]=%d\n",i,array[i]);
     
       return 0;
}
void swap_array(int array[],int length)
{
    int i,temp=0;
     for(i=0;i<(length/2);i++)
    {
        temp = array[i];
        array[i]=array[length-i-1];
        array[length-i-1]=temp;
    }
    
    
}