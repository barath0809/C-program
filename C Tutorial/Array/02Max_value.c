#include "stdio.h"
int find_maxele(int array[],int length);
int main()
{
    int my_array1[]={3,45,6,84,232,4,344,6};
    int my_array2[]={23,56,4,234,32,443,5,6};
    int max1 = find_maxele(my_array1,8);
    int max2 = find_maxele(my_array2,8);
    printf("First array max val:%d\n",max1);
    printf("second array max val:%d\n",max2);
    return 0;
}
int find_maxele(int array[],int length)
{
  int max = array[0];
  for(int i=1;i<length;i++)
  {
    if(array[i]>max)
    max = array[i];
  }
  return max;
}
