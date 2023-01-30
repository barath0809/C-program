#include<stdio.h>
typedef struct new
{
    int reg_no;
    char name[20];
    float mark_percentage;
}rank_sheet;
int main()
{
    rank_sheet first;
    first.reg_no = 5008 ;
    first.mark_percentage = 79.9;
    strcpy(first.name,"Barath");

    printf("Name :%s",first.name);
    printf("\nReg.No:%d",first.reg_no);
    printf("\nMark Percentage:%f",first.mark_percentage);
    return 0;
    
}