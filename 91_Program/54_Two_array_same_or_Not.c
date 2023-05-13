/*
Two check two arrays and both are same array or not
input:-> array[]={0,1,2,3,4}
         array_2[]={1,2,3,4,5}
output:->Not equal
*/
#include "stdio.h"
int main()
{
     int array[]={55,1,2,3,4},array_2[]={1,2,3,4,55};
     int sum = 0,sum_2 = 0;
     for(int i=0;i<5;i++)
     {
        sum = sum + array[i];
        sum_2 = sum_2 + array_2[i];
     }
     if(sum==sum_2)
        printf("The both array are equal");
    else 
       printf("The arrays are not equal");

    return 0;
}