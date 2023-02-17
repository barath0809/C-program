#include "stdio.h"
#define MAX(a,b,c) (a>b&&a>c)?a:(b>c)?b:c
void main()
{
    int a=66,b=65,c=15;
   if(a>b && a>c){
    printf("The max element A value =%d",a);
   }
   else if (b>a&&b>c)
   {
    printf("The max element B value =%d",b);
   }
   else  if (c>b&&c>a)
   {
    printf("The max element C value = %d",c);
   }
    printf("\n");
   printf("The macro function->%d",MAX(a,b,c));
   
}