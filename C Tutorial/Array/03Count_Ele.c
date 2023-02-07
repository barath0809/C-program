#include "stdio.h"
int count_elements(int [],int,int);
int main()
{
    int my_array[]={34,2,4,3,5,44,2,2,2};
    int count_value = count_elements(my_array,9,2);
    printf("The count in my_array:%d",count_value);
    return 0;
}
int count_elements(int array[],int length,int number)
{
    int count = 0;
    for(int loop=0;loop<length;loop++)
{
    if(array[loop]==number)
    count++;
}
return count;
}