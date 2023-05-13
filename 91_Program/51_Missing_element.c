/*
Missing Element in series of 100 num...
input:-> 1,2,3,4,5,7  n=7
output:-> 6
Explanation:-> we will find out missing number
Formula:-> n*(n+1)/2
*/
#include "stdio.h"
int main()
{
    int size=0,sum=0,missing_element=0;
    int linear_array[100];
    printf("Enter the array size:");
    scanf("%d",&size);
    for(int tacking_ip=0;tacking_ip<size;tacking_ip++)
    {
        scanf("%d",&linear_array[tacking_ip]);
    }
    printf("The user input is....\n");
    for(int print=0;print<size;print++)
    {
        printf("%d\t",linear_array[print]);
        sum = sum + linear_array[print];
    }
      printf("\n");
        missing_element = (size*(size+1)/2)-sum;
        printf("The missing element is...%d\n",missing_element);
        return 0;

}