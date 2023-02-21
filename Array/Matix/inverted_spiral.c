#include "stdio.h"
int main()
    {    int n;
         printf("Enter the arr size(only odd):");
        scanf("%d",&n);
        int r_st=0,cl_st=0,r_end=n-1,cl_end=n-1;
       
        int tot=n*n,arr[n][n];
        while (r_end>=r_st&&cl_st<=cl_end)

        {
                
        // Bottom Veena 
        for(int i=cl_end;i>=cl_st;i--)
        {
           arr[r_end][i]=tot--;
        }
        r_end --;
        // First Col
         for(int i=r_end;i>=r_st;i--)
         {
            arr[i][cl_st]=tot--;
         }
         cl_st ++;
         // Top 
             for(int i=cl_st;i<=cl_end;i++)
             {
                arr[r_st][i]=tot--;
             }
         r_st++;
         // Last col
           for(int i=r_st;i<=r_end;i++)
           {
             arr[i][cl_end]=tot--;
           }
           cl_end --;
        }
       

          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
          }
          return 0;
    }

