#include "stdio.h"
void print_fun(int array[],int len)
 {
    for(int i=0;i<len;++i)
    {
        printf("The array ele[%d]:%d\n",(i+1),array[i]);
    }
 }
     
int main()
{
         int array[]={2,4,5,6,7,8},temp=0,k=0,pos,u;
    printf("The array elements:");
    printf("\n");
    print_fun(array,6);
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the value:");
    scanf("%d",&u);
    
    for(k=0;k<6;k++)
    {
      if(k==pos-1){
        temp =array[k];
        array[k]=u;
        array[k+1]=temp;
       // temp=0;
      }
    }
    printf("The updated array:\n");
    k++;
    print_fun(array,k);
  return 0;
}

