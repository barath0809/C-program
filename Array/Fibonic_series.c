#include "stdio.h"
#define MAX 15
int main()
{
    long long int array[MAX];
    int pos;
    array[0]=1;
    array[1]=3;
    for(int i=2;i<MAX;i++)
    {
     array[i]=array[i-1]*array[i-2];
    }
    printf("Enter the Position:");
    scanf("%d",&pos);
    printf("The given pos num is:%lld\n",array[pos]);
    return 0;
}