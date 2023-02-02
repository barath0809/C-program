#include "stdio.h"
int main()
{
    int n,array[100],i;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the values:........\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d\n",&array[i]);
    }
    printf("Your Enter the Elments are.....\n");
    for(i=0;i<n-1;i++)
      printf("%d",array[i]);

      return 0;
}