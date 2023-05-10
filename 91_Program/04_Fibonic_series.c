/*
Fibonic_Series:-
0,1,1,2,3,5,8......
*/
#include "stdio.h"
int main()
{
    int first_num = 0,second_num = 1 ,next_num,boundary ;
    printf("How many series you want enter the numbe :");
    scanf("%d",&boundary);
    for(int load = 0;load<boundary;load++)
    {
        if(load<=1)
        {
            next_num=load;
        }
        else
        {
            next_num = first_num + second_num ;
            first_num = second_num;
            second_num = next_num ;
        }
        printf("%d \n",next_num);
    }
    return 0;
}