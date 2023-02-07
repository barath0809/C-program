#include "stdio.h"
#include "string.h"
#include "stdbool.h"
bool palindrome(char []);
int main()
{
    char string[]="asdfghjklkjhgfdsa";
    if(palindrome(string))
       printf("The given string is palindrome....");
    else 
    printf("The goiven string is not palindrom...");
}
bool palindrome(char string[])
{
    int len = strlen(string);
    int midle = len / 2;
    for(int i=0;i<midle;i++)
    {
        if(string[i]!=string[len-i-1])
         return false;
        else 
         return true;
    }
   

}
