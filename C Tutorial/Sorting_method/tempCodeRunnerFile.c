#include "stdio.h"
void print_function(int arry[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arry[i]);
    }
}
int swap_function(int *fr,int *fs)
{
    int temp;
    temp = *fr;
    *fr = *fs;
    *fs = temp;
}
int selection_sort(int array[],int size)
{
    int min_valu,i,j;
    for( i=0;i<size-1;i++)
    {
        min_valu=i;
        for( j=i+1;j<size;j++)
        {
            if(array[j]<array[min_valu])
            {
                min_valu=j;
            }
            if(min_valu !=i)
            {
                swap_function(&array[min_valu],&array[i]);
            }
        }
    }
}
int main()
{
    int un_sort_array[5]={64,25,12,22,11};
    selection_sort(un_sort_array,5);
    printf("After selection sorting....\n");
    print_function(un_sort_array,5);
    return 0;
}