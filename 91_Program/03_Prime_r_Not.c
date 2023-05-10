/*
Prime_or_Not:-
input:-> 4 
output:-> prime_number 
Explanation:-> Divde by 2 reminder is 0
*/
#include "stdio.h"
int main()
{
    int getting_number;
    printf("Enter the number:");
    scanf("%d",&getting_number);
    if(getting_number%2==0)
      printf("The number(%d) is Prime",getting_number);
    else if (getting_number%2!=2)
     printf("The number(%d) is not prime",getting_number);

    return 0;
}