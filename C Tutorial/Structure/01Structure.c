#include <stdio.h>
#include <string.h>
struct fs_data // Structure Declaration
{
    char Name_of_Employee[10];
    int Age ;
    float Weight;
};
/*
 1.To declare all variables
 2.Syntax : -> (structure data type) (structure variable name)
*/

int main()
{  
    struct fs_data jan;//To assign structre to separate variable
    jan.Age=10; 
    strcpy(jan.Name_of_Employee ,"BARATH");
    jan.Weight = 58.5;
/*
1.To decalre variable to structre assign 
2.To assign the values for structre members
3.To print the struct members
*/
    printf("Name:%s\n",jan.Name_of_Employee);
    printf("Age:%d\n",jan.Age);
    printf("Weight:%.01f\n",jan.Weight);
    return 0;
}