/*
To Find out first duplicate num in array
input:-> 1,2,3,4,3,5,4
output:->3
*/
#include "stdio.h"
#include "stdlib.h"
int finding_first_duplicate(int *rx_arr,int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i+1; j < size; j++)
        {
          if (rx_arr[i]==rx_arr[j])
          {
            printf("First duplicate in array:%d",rx_arr[i]);
            exit(0);
          }       
        }
    }
}
int main()
{
    int *input_array,size=0;
    printf("Enter size of array...");
    scanf("%d",&size);
    input_array = (int*)malloc(sizeof(int)*size);
    for (size_t i = 0; i < size; i++)
    {
       scanf("%d",&input_array[i]);
    }
    finding_first_duplicate(input_array,size);
    return 0;
}