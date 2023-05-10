/*
Armstrong_Number:-
input:->125
output:->Armstrong Number
Explanation:-> 153 -> (1*1*1)+(2*2*2)+(5*5*5) -> 153 */
#include "stdio.h"
#include "math.h"
int main()
{
    int arm_num,slice=0, first_calib,second_calib,root=0,check=0;
    printf("Enter the number:");
    scanf("%d",&arm_num);
    first_calib=second_calib=arm_num;
    while(first_calib)
    {
        first_calib/=10;
        root++;
    }
    while (second_calib)
    {
       slice = second_calib%10;
        check=check+pow(slice,root);
        second_calib/=10;
    }

    if(check==arm_num)
      printf("The number is armstrong");
     else
      printf("The number is not-armstrong");
   return 0;
}