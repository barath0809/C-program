#include <stdio.h>
int main()
{
  char val;
    printf("Enter any Valu or Number:   ");
    scanf("%c",&val);
    if(((val>='a')&&(val<='z'))||((val>='A')&&(val<='Z')))
      printf("The %c is alphabet...",val);
      
    else 
      printf("The %c is Number....",val);
      
    return 0;
}