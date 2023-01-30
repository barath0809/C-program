#include<stdio.h>
void array_asending(int elements[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(elements[i]<elements[j])
            {
                temp = elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
        }
    }
    printf("The out put of array is.........\n");
    for(i=0;i<size;i++)
    {
        printf("%d",elements[i]);
    } 
}
int main()
{
    int array[100],i,n,original_array,i1;
    printf("Enter the array size:");
    scanf("%d",&n);
    array[n];
    printf("Enter the elementes....");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    array_asending(array,n);
    
    return 0;
}