#include "stdio.h"
 
int main()
{
    int siz = 5;
    int f_arr_pra[5] = { 1,5,7,9,10 };
    for(int snake=0;snake<siz;snake++)
    {
        printf("%d: %d\n",snake+1,f_arr_pra[snake-1-siz]);
    }
    return 0 ;
}