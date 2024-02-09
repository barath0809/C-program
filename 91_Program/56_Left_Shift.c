/*
To Left shift the array elements..
input :-> 1,2,3,4,5
output:-> 4,5,1,2,3
*/
#include "stdio.h"
#define ROTATION 2
int main()
{
    int samp_arr[]={1,2,3,4,5};
    int temp,size;
    size = sizeof(samp_arr)/sizeof(samp_arr[0]);
    for(int first=0;first<size;first++)
    {
        temp = samp_arr[size-1];
        for (size_t i = 0; i < size; i++)
        {
           samp_arr[i]=samp_arr[i+1];
        }
        samp_arr[0]=temp;
    }
    printf("After shifting the eelments...");
    for (size_t ans = 0; ans < size; ans++)
    {
        printf("%d\t",samp_arr[ans]);
    }
    return 0;
    
}
