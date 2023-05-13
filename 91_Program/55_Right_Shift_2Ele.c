/*
To Right shift two Elements
input:-> 1,2,3,4,5
output:-> 3,4,5,1,2
*/
#include "stdio.h"
#define SHIFTING_LOCATION 2
int main()
{
    int shift_array[]={1,2,3,4,5};
    int temp = 0,loop=0,size;
    size=sizeof(shift_array)/sizeof(shift_array[0]);
    for(int rotation=0;rotation<SHIFTING_LOCATION;rotation++)
    {

          temp = shift_array[size-1];
    for(loop=size-1;loop>=0;loop--)
    {
        shift_array[loop]=shift_array[loop-1];
    }
     shift_array[0]=temp;
    }
    printf("After shifting arrays....\n");
    for(int print=0;print<size;print++)
    {
        printf("%d\t",shift_array[print]);
    }
    return 0;
}