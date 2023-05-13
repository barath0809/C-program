/*
To find out minmum element in array
input:-> 1,2,3,4,5
output:-> 1
*/
#include "stdio.h"
int main()
{
    int w_max_array[]={111,21,31,14,59,62,76,1};
    int loop,min,size;
    size = sizeof(w_max_array)/sizeof(w_max_array[0]);
    for(loop=0;loop<size;loop++)
    {
        min=w_max_array[0];
        if(min>w_max_array[loop])
        {
            min=w_max_array[loop];
        }
    }
    printf("The minium number in the array:-> %d",min);
    return 0;
}