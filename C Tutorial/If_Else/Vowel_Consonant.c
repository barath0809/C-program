#include <stdio.h>
int main()
{
  char val;
    printf("Enter any alphabet:  ");
    scanf("%c",&val);
    if((val=='A'||val=='E'||val=='I'||val=='O'||val=='U')||(val=='a'||val=='e'||val=='i'||val=='o'||val=='u'))
      printf("The %c is vowel",val);
      
    else 
      printf("The %c is consonant",val);
      
    return 0;
}