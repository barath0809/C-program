/*
Palindrom_or_Not:-
input:-> 121
output:-> Palindrom
Explanation:-> after swap the number same number will be came 
*/
#include "stdio.h"
int main()
{
    int user_input,result=0,TEMP ;
    printf("Which number you want check...");
    scanf("%d",&user_input);
    TEMP = user_input;
    while(TEMP)
    {
        result= result*10+TEMP%10;
        TEMP/=10;
    }
    if(user_input==result)
        printf("The nuber(%d) is palindrom",user_input);
    else
        printf("The nuber(%d) is Not-palindrom",user_input);

    return 0;

}