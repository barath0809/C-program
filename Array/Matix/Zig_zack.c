#include "stdio.h"
int main()
{
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}},Row=0,Col=0;
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        printf("%d",array[Row][i]);
    }
    Col=i-1;
   
    for(j=Row+1;j<i;j++)
    {
        printf("%d",array[j][Col]);
    }
    Row=Col;
     printf("Col valu:%d",j);
    for(k=j-2;k<Col-2;k--)
    {
        printf("%d",array[Row][k]);
    }
    Col=k;
    for(l=Col+2;l<k;l--)
    {
        printf("%d",array[l][Col]);
    }
    return 0;
}