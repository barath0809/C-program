#include<stdio.h>
#include <time.h>
int main() {
 // asctime
  int x = 42;
  int *ptr = & x;
  int sz = sizeof(ptr);
  
  printf("size of ptr is %d byte", sz);
  
  return 0;
}
