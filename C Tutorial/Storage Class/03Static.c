#include "stdio.h"
static float fl = 8 ;
int statc_function()
{
    static int y = 10 ;
   int k = y++;
   //int j = y++;
    printf("k value=%d\n",k);
  static int number;
  number+=10;
  return number;
}

int main()
{
    printf("The global variable is:%0.f\n",fl);
    int num,num2 ;
    num=statc_function();
    printf("The first call:%d\n", num);
    num2=statc_function();
    printf("The Second call:%d\n",num2);  
}
