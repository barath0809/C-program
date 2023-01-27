#include<stdio.h>
 void array_MAX(int array[], int size)
 {
    int i ,temp,a=array[0];
    for(i=0;i<size;i++)
    {
        if(a<array[i])
        {
            a=array[i];
        }
    }
        printf("MAX_element:%d ",a);
 }
int main ()
{
    int n,array[100],size,i;
    
    printf("Enter the array size:\n");
    scanf("%d",&n);
    array[n];
    printf("Enter the elements:\n");
       for(i=0;i<n;i++)
        {
         scanf("%d",&array[i]);
        }
        printf("The elements are:\n");
       for(i=0;i<n;i++)
        {
         printf("%d\n",array[i]);
        }

    array_MAX(array,n);
    return 0 ;

}