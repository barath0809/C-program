#include "stdio.h"
int main()
{
    int my_array[100] ,num;
    printf("Enter the array size:");
    scanf("%d",&num);
    printf("Enter the values....\n");
    for(int loop=0;loop<num;loop++)
    {
        scanf("%d",&my_array[loop]);
    }
    int min = my_array[0];
    for(int i=1;i<num;i++)
    {
        printf("Checking the my_array[%d] = %d\n", i , my_array[i]);
        if(my_array[i]<min)
          {
            min=my_array[i];
            printf("New Element Update:%d\n",my_array[i]);
          }
    }
    printf("The Min element:%d",min);
    return 0;
}