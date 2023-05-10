/*
Reverse the number:-
input:->123
output:->321
*/
#include "stdio.h"
int main()
{
   int reverce_number=0,after_reverse=0;
   printf("Enter the number:");
   scanf("%d",&reverce_number);
   while(reverce_number)
   {
    after_reverse=after_reverse*10 + reverce_number%10;
    reverce_number /=10;
   }
   printf("After the reverse the intiger:%d",after_reverse);
   return 0 ;
}