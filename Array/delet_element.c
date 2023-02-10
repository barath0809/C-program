#include "stdio.h"
void print_elements(int array[],int lenth)
{
for(int i=0;i<lenth;i++)
    {
        printf("The array value[%d]=%d\n",i+1,array[i]);
    
    }
}
int main()
{
    int array[]={3,5,8,9,3,67,89},c=0,pos;
    printf("The original array:");
    printf("\n");
    print_elements(array,7);
    printf("Enter the pos:");
    scanf("%d",&pos);
    for(c=0;c<7;c++)
    {
        if(array[c]==pos-1)
        {
            array[c]=array[++c];
            c++;
        }
    }
    --c;
    printf("The new elements:");
    printf("\n");
    print_elements(array,c);
    
    return 0 ;
}