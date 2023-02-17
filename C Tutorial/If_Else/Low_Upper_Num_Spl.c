#include "stdio.h"
int main()
{
    char ch;
    printf("Enter anything...");
    scanf("%c",&ch);
    if(ch>='a'){
        printf("The %c is Lower case..",ch);
    }
    // else if (ch>='A'&&ch<='Z')
    // {
    //     printf("The %c is Upper case..",ch);
    // }
    // else if (ch >='0'&& ch <='9')
    // {
        // printf("The %c is Number..",ch);
    // }
    // else 
    // printf("The %c is special character...",ch);
    
  return 0;  
}