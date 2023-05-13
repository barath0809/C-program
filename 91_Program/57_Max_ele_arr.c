/*
To find out maximum element in array
input:-> 1,2,3,4,5
output:-> 5
*/
#include "stdio.h"
int main()
{
    int w_max_array[]={1,2,3,4,5,62,76};
    int loop,max,size;
    size = sizeof(w_max_array)/sizeof(w_max_array[0]);
    for(loop=0;loop<size;loop++)
    {
        max=w_max_array[0];
        if(max<w_max_array[loop])
        {
            max=w_max_array[loop];
        }
    }
    printf("The maximum number in the array:-> %d",max);
    return 0;
}