/*
To checking two array and fining the missing number
input :-> array[]={0,1,2,3,4}
        array_2[]={1,2,3,4,5}
output:-> 5
Explanation:-> To check and compare
*/
#include "stdio.h"
int main()
{
    int array[]={0,1,2,3,4},array_2[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum = sum + array_2[i]-array[i];
    }
    printf("The Missing Number:%d",sum);
    return 0;
}