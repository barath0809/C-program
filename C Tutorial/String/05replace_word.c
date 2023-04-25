#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void swap_word(char *text,char *oldWord,char *newWord)
{ 
   int i = 0, cnt = 0;
   int len1 = strlen(newWord);
   int len2 = strlen(oldWord);
   for (i = 0; text[i] != '\0'; i++) {
      if (strstr(&text[i], oldWord) == &text[i]) {
         cnt++;
         i += len2 - 1;
      }
   }
   char *newString = (char *)malloc(i + cnt * (len1 - len2) + 1);
   i = 0;
   while (*text) {
      if (strstr(text, oldWord) == text) {
         strcpy(&newString[i], newWord);
         i += len1;
         text += len2;
      }
      else
      newString[i++] = *text++;
   }
   printf("New String: %s", newString);
   printf("\n");
}
int main()
{
    char user_input[]="Hi im learning";
    char old_string[]="learning";
    char new_string[]="practiceing";
    char *result = NULL;
    swap_word(user_input,old_string,new_string);
    return 0;
}