/*
Binary_or_Not;-
input:-> 01001
output:-> Number is Binary
Explanation:-> 0 and 1 comes mean number is binary
*/
#include "stdio.h"
int main()
{
    int binary_num,temp;
    printf("Enter the number...");
    scanf("%d",&binary_num);
    while(binary_num)
    {
        temp=binary_num%10;
        if(temp!=0 && temp!=1)
       {
           printf("This not Binary");
           break;
        }
    binary_num/=10;
        if(binary_num==0)
        {
            printf("The number is binary");
        }
    }
    return 0;
}
