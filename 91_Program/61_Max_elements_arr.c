/*
To count the occurance in the array...
input:->3,3,2,1,2,3
output:->3
*/
#include "stdio.h"
#include "stdlib.h"
int to_count_arr_elment(int *source,int size)
{
    int count=0,max_element=0,max_count=0;
    for (size_t i = 0; i < size; i++)
    {
        count = 1;
        for (size_t i_1 = i+1; i_1 < size; i_1++)
        {
            if (source[i]==source[i_1])
            {
                count++;
               if (count>max_count)
               {
                max_element=source[i];
                max_count = count;
               }
               
            }
            
        }
        
    }
    printf("The max count %d is %d times...",max_element,max_count);
}
int main()
{
    int *input_f_user,size;
    printf("Enter the size of the array...");
    scanf("%d",&size);
    input_f_user = (int*)malloc(sizeof(int)*size);
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",&input_f_user[i]);
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("%d.%d\n",i+1,input_f_user[i]);
    }
    to_count_arr_elment(input_f_user,size);
    return 0;
}