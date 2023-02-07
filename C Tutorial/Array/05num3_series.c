#include "stdio.h"
#define MAX 15
int main()
{
    long long int array[MAX],pos=0;
    long long int a=1,b=3,c=0;
    int i,j;
    array[0]=1;
    array[1]=3;
    for(i=2,j=3;i<MAX;i++,j++)
    {
        c=a*b;
        array[j]=c;
        a=b;
        b=c;
    }
    printf("Enter the Position:");
    scanf("%d",&pos);
    printf("The given pos num is:%lld",array[pos]);
    return 0;
}