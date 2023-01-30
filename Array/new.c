#include<stdio.h>
void display_array_size(int **u_array)
{
    int i = 0,j;
    while((**(u_array+i))!='\0')
    {
        
        printf("value of array values:%d\n",**(u_array+i));
        ++i;
    }
       printf("\nTotal Size:%d",i);
}
int main()
{
    int array[]={2,4,5,7,8,9,12,21,3,4},size,i;
    int *ptr_array[11];
    size = sizeof(array)/sizeof(array[0]);
    for(i=0;i<=10;i++)
    {
        //printf("%d\n",array[i]);
        ptr_array[i]=&array[i];
    }
    display_array_size(&ptr_array[0]);
    return 0;
}