/*
To find out second maximum in this array..
input:-> 12,3,4,5,6,78,99
output:->78
*/
#include "stdio.h"
int main()
{
    int linear_array[]={13,45,2,3,6,77,98};
    int first_max=0,second_max=0,count=0;
    count = sizeof(linear_array)/sizeof(linear_array[0]);
    for(int loop=0;loop<count;loop++)
    {
        first_max=linear_array[0];
        if(first_max<linear_array[loop])
        {
            second_max = first_max;
            first_max = linear_array[loop];
        }
    }
    printf("The maximum in this array:-> %d",second_max);
    return 0;
}