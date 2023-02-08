#include "stdio.h"
#define MAX 15
int main()
{
    long long int array[MAX];
    int pos=0;
    long long int a=1,b=3,c=0;
    int i,j;
    array[0]=0;
    array[1]=1;
    for(i=2;i<MAX;i++)
    {
        
        array[i]=array[i-1]+array[i-2];
         
    }
    printf("Enter the Position:");
    scanf("%d",&pos);
    printf("The given pos num is:%lld",array[pos]);
    return 0;
}